# Driver de Teclado USB com Macros Configuráveis para Videogames

Jogos competitivos como **Street Fighter** e **Mortal Kombat** exigem que os jogadores realizem comandos rápidos e precisos. Similarmente, jogadores que realizam **speedruns** precisam executar sequências complexas de teclas para **explorar glitches** e economizar tempo. Este repositório contém o código fonte do projeto que possui como objetivo desenvolver um **driver de teclado USB** que permite a utilização de **macros configuráveis** voltados a jogos de luta e speedruns. A ferramenta facilita a execução de **combos complexos** e sequências complexas, como a **exploração de bugs** em speedruns, proporcionando rapidez e precisão aos jogadores. Inicialmente, apesar de Possuir esse foco, o Driver desenvolvido pode ser aplicado em diversas situações na qual deseja-se automatizar uma tarefa que exija que determinada sequência de Teclas seja executada. Dessa forma, com o driver, é possível programar e automatizar combinações de teclas que são difíceis de executar manualmente, o que não apenas aumenta a **performance**, mas também melhora a **acessibilidade** para pessoas com **deficiência motora**, permitindo que realizem ações complexas com um único botão.


## Aplicações e Benefícios

- **Execução de Combos**: Facilita a execução de combos em jogos de luta com uma tecla.
- **Speedruns**: Permite a execução automatizada de sequências complexas para exploração de glitches e bugs em speedruns.
- **Ações Automatizadas**: Configuração de macros para realizar tarefas repetitivas em jogos de estratégia e RPGs.
- **Acessibilidade**: Auxilia pessoas com baixa mobilidade nas mãos, permitindo que utilizem o driver para executar ações complexas com menos esforço.


## Desenvolvimento

Será utilizado como base para esse projeto os Drivers presentes no [repositório do Linux](https://github.com/torvalds/linux/blob/master/drivers/hid/usbhid). O driver `usbhid` (USB Human Interface Device) é responsável no Linux por gerenciar **dispositivos de interface humana** conectados via USB, como teclados, mouses, gamepads e outros dispositivos de entrada. Ele traduz os eventos gerados por esses dispositivos em um formato que o sistema operacional pode entender e utilizar. O mesmo é composto por vários arquivos de código contendo milhares de linhas. Dessa forma, foi decidido utilizar o Driver de teclado usb `usbkbd`, pois é simplificado e específico para teclados USB. As principais diferenças entre os drivers `usbhid` e `usbkbd` são:

- `usbkbd` foi projetado para ser mais leve e rápido do que o driver `usbhid`, mas com suporte limitado a teclados USB básicos, ou seja, ele ignora funcionalidades avançadas como teclas multimídia ou teclados com recursos especiais. 
- O driver `usbkbd` geralmente é utilizado em ambientes em que o tamanho do kernel ou o desempenho são críticos, como sistemas embarcados ou inicializações rápidas, já que ele não precisa processar tantos tipos de dispositivos como o `usbhid`. 
- Diferentemente do `usbhid`, o `usbkbd` suporta apenas teclados, e a implementação é otimizada para isso.

Seguindo essa Linha de raciocíneo, foi utilizado como base para o projeto o driver `usbkbd`. Mas para isso, foi necesário desenvolver uma forma de *"forçar"* o sistema utilizar o driver `usbkbd` ao invés do padrão `usbhid`, assim foi alterado o **Makefile** e criado o script `load_driver.sh`.

Assim, foi necessário alterar a função `usb_kbd_irq` que é responsável por lidar com eventos de interrupção no driver de teclado USB que é chamada quando o teclado envia dados para o sistema.

Durante o desenvolvimento foi constatado travamentos nas aplicações, mais perceptível no emulador, ao executar os macros. Houve a tentativa de utilizar **kthreads** para otimizar o processo, mas a função `usb_kbd_irq` apresenta uma rotina de interrupção e, em muitos casos, não é seguro ou apropriado criar e iniciar threads diretamente de dentro de uma rotina de interrupção. Como a criação de threads pode envolver operações bloqueantes, ela não é adequada para ser feita dentro de uma rotina de interrupção. Tais rotinas devem executar o mínimo possível para evitar atrasos no manuseio de outras interrupções. Assim, foi realizada a otimização do código sem utilizar **kthreads** e adicionado um **delay** de 70 milisegundos para simular o pressionar e soltar das teclas para garantir que as mesmas sejam captadas corretamente pela aplicação desejada.


## Observações

- Nesse repositório, foi configurado Macros tendo como base os combos e movimentos do personagem *Smoke* do jogo **Ultimate Mortal Kombat 3** do Super Nintendo. 
- Os Combos podem ser ativados com as teclas numéricas, além disso, visando a utilização do Driver no dia-a-dia foi adicionado uma combinação de teclas para ativar e desativar os Macros. Dessa forma, é possível utilizar o teclado normalmente nas tarefas diárias e ativar/desativar os Macros, quando desejar, utilizando a combinação: `crtl_direito + /`;
- Foi utilizado o Emulador **Snes9x** para executar o jogo;
- O Driver foi desenvolvido e testado no Sistema Operacional Linux **Debian** 12 com a versão do Kernel 6.1.0-25-amd64;
- Foi criado dois Scripts para auxiliar a carregar e descarregar o Driver, "load_driver.sh" e "reset_driver.sh" respectivamente;
- O driver funciona para qualquer teclado USB conectado;
- Os scripts `load_driver.sh` e `reset_driver.sh` precisão de permissão **sudo** para serem executados;
- Foram implementados 3 Combos e uma Finalização:
    - Combo 1 (Tridente): Teclas 1 e 2 (Lado esquerdo e direito do mapa respectivamente);
    - Combo 2 (Teleporte com ataque): Teclas 3 e 4 (Lado esquerdo e direito do mapa respectivamente);
    - Combo 3 (Sequência de Golpes): Tecla 5 (Qualquer lado);
    - Finalização 1 (Friendship): 6.
- Os botões no emulado foram configurados de tal forma:
    - A = Tecla "x";
    - B = Tecla "z";
    - X = Tecla "a";
    - Y = Tecla "s";
    - L = Tecla "q";
    - R = Tecla "w".

## Utilização

- Executar Script `load_driver.sh` irá compilar e carregar o Driver no sistema, substituindo o driver atual, `usbhid`, pelo driver desejado `usbkbd` modificado. Assim, o driver com os Macros já terá sido carregado e é possível utilizar o teclado normalmente para as tarefas diárias e os Macros.
- Para ativar/desativar os Macros basta utilizar a combinação `crtl_direito + /`. Os mesmos estarão funcionando nas teclas numérias.
- Caso deseje voltar para o driver padrão, `usbhid`, basta executar o script `reset_driver.sh`.