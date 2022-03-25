#include <Servo.h>

#define SWITCH_PIN 4

int switchaRoo = 0;

void setup(){
    Serial.begin(115200);
}

void loop() {
  if(digitalRead(SWITCH_PIN)){
    //int switchaRoo = random(0,100);
    
    Serial.print("Random Number: ");
    Serial.println(switchaRoo);
    Serial.println("ON");
    
    switch(switchaRoo){
      case 0:
        delay(300);
        UsusalUseless();
        switchaRoo++;
        break;
        
      case 1:
        KillingMeSlowly();
        switchaRoo++;
        break;
        
      case 2:
        NopeYouDoIt();
        switchaRoo++;
        break;

      case 3:
        PeekABoo();
        switchaRoo++;
        break;
        
      default:
        Serial.println("De-fault");
        switchaRoo = 0;
      }
  }
  else {
    GoToYourRoom();
  }
}
