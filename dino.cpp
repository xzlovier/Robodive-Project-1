#include <Servo.h> 
const int LDR1 = A0; 
const int LDR2 = A1; 
const int servoPin = 9 ; 
Servo myServo; 
 
void setup(){ 
  pinMode(LDR1, INPUT);   
  pinMode(LDR2, INPUT); 
  myServo.attach(servoPin); 
  myServo.write(0); 
  Serial.begin(9600); 
 
} 
void loop() { 
   int BG_brightness = analogRead(LDR2);    
   int Object = analogRead(LDR1); 
   Serial.println("Object Value: "); 
   Serial.println(Object); 
   Serial.println("Background Value: "); 
   Serial.println(BG_brightness); 
     
   if (BG_brightness >= 750) { 
        if (Object < 700){ 
          myServo.write(90); 
          delay(100); 
          myServo.write(0); 
          delay(200); 
        } 
        else{ 
          Serial.println("Stable"); 
        } 
}  
     else { 
         if (Object < 470  ){ 
          myServo.write(90); 
          delay(100); 
          myServo.write(0); 
          delay(200); 
        } 
        else{ 
          Serial.println("Stable"); 
        } 
    } 
     
    //delay(1000); 
}