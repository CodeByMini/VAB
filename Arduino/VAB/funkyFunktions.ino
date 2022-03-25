#define SERVO_PIN 9

#define INSIDE_BOX 160
#define PUSHING_SWITCH 41
#define STOP_BEFORE_THE_FUN_PART 80
#define JUST_A_NUDGE 140

Servo servo; 

void GoToYourRoom(){
    Serial.println("OFF");
    servo.attach(SERVO_PIN);
    servo.write(INSIDE_BOX);
    delay(50);
    servo.detach();
}

void UsusalUseless(){
  Serial.println("UsualUseless");
    servo.attach(SERVO_PIN);
    servo.write(PUSHING_SWITCH);
    delay(500);
    servo.detach();
}

void KillingMeSlowly(){
  Serial.println("Kill meeee");
  servo.attach(SERVO_PIN);
  for(int i = 180; i > PUSHING_SWITCH; i--){
      servo.write(i);      
      delay(40);  
    }
  servo.detach();
  Serial.println("Mee killed");
  delay(500);
}

#define HEAD 20
void ShakeHead(){
  for(int j = 0; j < 3; j++){
    for(int i = STOP_BEFORE_THE_FUN_PART; i > STOP_BEFORE_THE_FUN_PART-HEAD; i--){
      Serial.println(i);
      servo.write(i);      
      delay(10);  
    }
    for(int i = STOP_BEFORE_THE_FUN_PART-HEAD; i < STOP_BEFORE_THE_FUN_PART; i++){
      Serial.println(i);
      servo.write(i);      
      delay(10);  
    }
  }
}

void NopeYouDoIt(){
  Serial.println("NopeYouDoIt");
  servo.attach(SERVO_PIN);
  for(int i = 180; i > STOP_BEFORE_THE_FUN_PART; i--){
      servo.write(i);      
      delay(10);  
    }
  ShakeHead();
  servo.write(INSIDE_BOX);
  delay(500);
  servo.detach();
  Serial.println("Mee killed");
  delay(500);
}

void PeekABoo(){
  Serial.println("Peek-A-Boo");
  servo.attach(SERVO_PIN);
  delay(500);
  for(int i = 180; i > JUST_A_NUDGE; i--){
      Serial.println(i);
      servo.write(i);      
      delay(1);  
    }
  delay(700);
  GoToYourRoom();
  delay(3000);
  UsusalUseless();
  servo.detach();
  Serial.println("Mee killed");
}
