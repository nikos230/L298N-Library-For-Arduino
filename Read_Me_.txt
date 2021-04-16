/*
 * Written by Anastasiou Nikos 
 * For improvements or bugs    
 * Contact me using email
 * nikolas619065@gmail.com
 */
///////////////////////////////////////
// --- Check example code ! --- //
///////////////////////////////////////

Easy to use library for L298 dc motor driver. 

Some Instructions :

First you need to intialize the class by writting :

L298Ns motors(int enA, int in1, int in2, int in3, int in4, int enB);  for two motors
or
L298Ns motors(int enA, int in1, int in2); single motor

or without enable pins

L298Ns motors(int in1, int in2, int in3, int in4);  for two motors
or
L298Ns motors(int in1, int in2); single motor

and set all pins (enA -> 1, in1 -> 4 etc...) or you can use example code 

Functions : (Results depeding on wiring)

motors.forwardA(); turn motor A forward

motors.forwardB(); turn motor B forward 

motors.backwardA(); turn motor A backward 

motors.backwardB(); turn motor B backward 

motors.stop(); stops all motors

motors.stopA(); stops motor A

motors.stopB(); stops motor B

motors.SpeedA and motors.SpeedB  are pwn values for controlling speed of motors it can take values 0(min) to 255(max)
