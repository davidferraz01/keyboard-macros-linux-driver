# Driver de Teclado USB com Macros Configuráveis para Videogames

Jogos competitivos como **Street Fighter** e **Mortal Kombat** exigem que os jogadores realizem comandos rápidos e precisos. Similarmente, jogadores que realizam **speedruns** precisam executar sequências complexas de teclas para **explorar glitches** e economizar tempo. Este repositório contém o código fonte do projeto que possui como objetivo desenvolver um **driver de teclado USB** que permite a utilização de **macros configuráveis** voltados a jogos de luta e speedruns. A ferramenta facilita a execução de **combos complexos** e sequências complexas, como a **exploração de bugs** em speedruns, proporcionando rapidez e precisão aos jogadores. Inicialmente, apesar de Possuir esse foco, o Driver desenvolvido pode ser aplicado em diversas situações na qual deseja-se automatizar uma tarefa que exija que determinada sequência de Teclas seja executada. Dessa forma, com o driver, é possível programar e automatizar combinações de teclas que são difíceis de executar manualmente, o que não apenas aumenta a **performance**, mas também melhora a **acessibilidade** para pessoas com **deficiência motora**, permitindo que realizem ações complexas com um único botão.


## Aplicações e Benefícios

- **Execução de Combos**: Facilita a execução de combos em jogos de luta com uma tecla.
- **Speedruns**: Permite a execução automatizada de sequências complexas para exploração de glitches e bugs em speedruns.
- **Ações Automatizadas**: Configuração de macros para realizar tarefas repetitivas em jogos de estratégia e RPGs.
- **Acessibilidade**: Auxilia pessoas com baixa mobilidade nas mãos, permitindo que utilizem o driver para executar ações complexas com menos esforço.


## Desenvolvimento

Será utilizado como base para esse projeto os Drivers realacionados os USBHID presentes no [repositório do Linux](https://github.com/torvalds/linux/blob/master/drivers/hid/usbhid). O driver USBHID (USB Human Interface Device) é responsável no Linux por gerenciar dispositivos de interface humana conectados via USB, como teclados, mouses, gamepads e outros dispositivos de entrada. Ele traduz os eventos gerados por esses dispositivos em um formato que o sistema operacional pode entender e utilizar. O mesmo é composto por vários arquivos de código contendo milhares de linhas. Dessa forma, foi decidido utilizar o Driver de teclado usb USBKBD, pois esse driver é simplificado e específico para teclados USB. Ele foi projetado para ser mais leve e rápido do que o driver USBHID, mas com suporte limitado a teclados USB básicos, ou seja, ele ignora funcionalidades avançadas como teclas multimídia ou teclados com recursos especiais. Além disso, o driver USBKBD geralmente é utilizado em ambientes em que o tamanho do kernel ou o desempenho são críticos, como sistemas embarcados ou inicializações rápidas, já que ele não precisa processar tantos tipos de dispositivos como o USBHID. Diferentemente do USBHID, o USBKBD suporta apenas teclados, e a implementação é otimizada para isso.

Seguindo essa Linha de raciocíneo, foi utilizado como base para o projeto o driver USBKBD. Mas para isso, foi necesário desenvolver uma forma de "forçar" o sistema utilizar o driver USBKBD ao invés do padrão USBHID, assim foi alterado o Makefile e criado o script "load_driver.sh"


## Observações

- Nesse repositório, foi configurado Macros tendo como base os combos e movimentos do personagem Smoke do jogo **Ultimate Mortal Kombat 3** do Super Nintendo. 
- Os Combos podem ser ativados com as teclas numéricas, além disso, visando a utilização do Driver no dia-a-dia foi adicionado uma combinação de teclas para ativar e desativar os Macros. Dessa forma, é possível utilizar o teclado normalmente nas tarefas diárias e ativar os Macros, quando desejar, utilizando a combinação: `crtl_direito + /`.
- Foi utilizado o Emulador Snes9x para executar o jogo;
- O Driver foi desenvolvido e testado no Sistema Operacional Linux Debian 12 6.1.0-25-amd64;
- Foi criado dois Scripts para auxiliar a carregar e descarregar o Driver, "load_driver.sh" e "reset_driver.sh" respectivamente.
- 