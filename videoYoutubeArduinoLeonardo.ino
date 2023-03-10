#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  delay(2500);

      Keyboard.press(KEY_LEFT_GUI);
      Keyboard.press('r');
      Keyboard.releaseAll();
      delay(1500);
      Keyboard.print("chrome ");
      Keyboard.press(KEY_RETURN);
      delay(1000);
      Keyboard.releaseAll();
      Keyboard.print("https://www.youtube.com/watch?v=0NvIwD52Nzw");
      Keyboard.releaseAll();
      delay(200);
      Keyboard.press(KEY_RETURN);
      delay(100);
      Keyboard.releaseAll();
      delay(4000);
      Keyboard.press('f');
      Keyboard.releaseAll();
}

void loop() {
  
}
