/*
 * Written by Anastasiou Nikos *
 * For improvements or bugs    *
 * Contact me using email      *
 * nikolas619065@gmail.com     *
 */
#include <L298N_github.h>

// --- Pins for L298 motor driver controller --- //
//set your pins here
const unsigned int enA =  8;
const unsigned int in1 = 14;
const unsigned int in2 = 15;
const unsigned int in3 = 16;
const unsigned int in4 = 17;
const unsigned int enb =  9;

L298Ns motors(enA, in1, in2, in3, in4, enb);

// -------------------------------------------- //

void setup(){
  Serial.begin(9600);

  motors._SpeedA = 50; // 0 - 255
  motors._SpeedB = 50; // 0 - 255
  
}

//Testing the L298 driver
void loop(){

  motors.forwardA();
  delay(1000);
  motors.stopA();

  motors.backwardA();
  delay(1000);
  motors.stopA();

  motors.forwardB();
  delay(1000);
  motors.stopB();

  motors.backwardB();
  delay(1000);
  motors.stopB();

  motors.stop();
  delay(10000);


}
