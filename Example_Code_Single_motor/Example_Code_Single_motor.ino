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

L298Ns motors(enA, in1, in2);

// -------------------------------------------- //

void setup(){
  Serial.begin(9600);

  motors._SpeedA = 50; // 0 - 255
}

//Testing the L298 driver
void loop(){

  motors.forwardA();
  delay(1000);
  motors.stopA();

  motors.backwardA();
  delay(1000);
  motors.stopA();

  motors.stop();
  delay(10000);
  



}
