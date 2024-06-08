#include <Servo.h>

Servo s1,s2,s3,s4; //s1=L upper,s4=L lower

Servo s5,s6,s7,s8;//s5=R upper, s8=R lower
void setup() {
//  s1.attach(4); 
  s2.attach(5);
  s3.attach(6);
//  s4.attach(7);
//  s5.attach(7);
  s6.attach(8);//9
 s7.attach(9);//10
//  s8.attach(11);
  s2.write(95);
  //s6.write(90);
////  s2.write(90);
  s3.write(95);
  s6.write(38);
  s7.write(90);
 /// s7.write(90);
  //s7.write(90);
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
 for(int i=0;i<4;i++){
    s2.write(45); //45
    delay(1000); 
     s3.write(58); //45
    delay(1000); 
    s6.write(48); 
    delay(1000); 
    s7.write(85); //70
    delay(1500);
    s2.write(80);
    delay(1000);
    s6.write(8); //45
    delay(1000);
    s7.write(60);
//    delay(1000);
//    s6.write(75);
//    delay(1000);
  // s3.write(90);
   delay(2000);
//    s3.write(75); //70
//    delay(1500);
//    s2.write(65);
//    delay(1000);
//    s6.write(100);
//    delay(1000);
//    s6.write(90);
//    delay(1000);
//    s7.write(125);
//    delay(1000);
    }
//    s6.write(75);
//    delay(10000);
 
//    s2.write(55);
//    delay(1000);
    
//    delay(2000); 
//    s3.write(90); 
//    delay(500);
//
//    
//    s6.write(90); 
//    delay(500); 
//    s6.write(90); 
//    delay(500); 
//    s7.write(90); 
//    delay(500);
//    s7.write(90); 
//    delay(500);
    
    
}
