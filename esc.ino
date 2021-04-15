#include "ESC.h"
ESC myESC (8);//balaca motor   
ESC myESC1 (9);  
   int i;             
void setup() {
  myESC.arm();
  myESC1.arm(); 
  myESC.speed(1500);
  myESC1.speed(1500);
  delay(5000);                                         
}

void loop() {
     myESC.speed(1400);//balaca motor
     for(i=1500;i>1000;i-=10){
    myESC1.speed(i); 
    delay (300);
    }for(i=1020;i<1500;i+=10){
      myESC1.speed(i); 
    delay (300); 
      }
    
    delay(1000);
  
}
