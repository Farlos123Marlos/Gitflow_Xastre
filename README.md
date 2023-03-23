# Gitflow_Xastre- 

Para executar o programa, faça o download dos arquivos em uma mesma pasta de nome escolhido;

Faça o download do Aplicativo Docker em sua máquina, siga os passos de instalação sugeridos. (https://desktop.docker.com/win/main/amd64/Docker%20Desktop%20Installer.exe, para versão windows);

Ao finalizar a instalação total, vá para a pasta com os códigos atráves do seu navegador de arquivos, clique com o botão direito no fundo da pasta e selecione "abrir no terminal";

Abra o docker ao fundo;

Com o terminal aberto, execute os seguintes comandos em sequência:

  docker build . -t cpp_teste:1
  
  docker run --rm -it cpp_teste:1
  
Ao executar o último comando, o programa irá rodar normalmente. Note que não existe necessidade de baixar compiladores (mingw ou GCC), ou qualquer IDE, já que o Docker fará isso para você.
