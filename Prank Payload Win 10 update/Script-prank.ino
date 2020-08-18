#include "DigiKeyboard.h"
#include "DigiKeyboardPtBr.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_W, MOD_CONTROL_LEFT); // Você pode alterar esse comando para não fechar a janela atual
  DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboardPtBr.print("https://updatefaker.com/windows10/index.html");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_F11);

for(;;) {  }
}
