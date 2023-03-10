//Adiciono a biblioteca Keyboard.h do Arduino Leonardo
#include <Keyboard.h>

void setup() {
  //Inicio a biblioteca Keyboard.h
  Keyboard.begin();
  //Aguardo 2,5 segundos para iniciar
  delay(2500);

      //Pressiono a tecla de Windows+R para abrir o Executar
      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press('r');
      //Libera as teclas pressionadas
      Keyboard.releaseAll();
      //Aguarda 1,5 segundos
      delay(1500);
      //Digita chrome e pressiona Enter para abrir o navegador
      Keyboard.print("chrome ");
      Keyboard.press(KEY_RETURN);
      //Aguarda 1 segundo
      delay(1000);
      //Libera as teclas pressionadas
      Keyboard.releaseAll();
      //Digita a url do vídeo, caso deseja colocar outro vídeo, basta colar a URL na linha abaixo substituindo a URL atual
      Keyboard.print("https://www.youtube.com/watch?v=0NvIwD52Nzw");
      //Libera as teclas pressionadas
      Keyboard.releaseAll();
      //Aguarda 0,2 segundos e pressiona Enter
      delay(200);
      Keyboard.press(KEY_RETURN);
      //Aguarda 0,1 segundo
      delay(100);
      //Libera as teclas pressionadas
      Keyboard.releaseAll();
      //Aguarda 4 segundos até o vídeo carregar e pressiona a letra f para colocar o vídeo em tela cheia
      delay(4000);
      Keyboard.press('f');
      //Libera as teclas pressionadas
      Keyboard.releaseAll();
}

void loop() {
  
}
