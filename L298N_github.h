/*
 * Written by Anastasiou Nikos *
 * For improvements or bugs    *
 * Contact me using email      *
 * nikolas619065@gmail.com     *
 */
#include "Arduino.h"

class L298Ns {

public:
  L298Ns(int enA, int in1, int in2, int in3, int in4, int enB);
  L298Ns(int enA, int in1, int in2);
  L298Ns(int in1, int in2, int in3, int in4);
  L298Ns(int in1, int in2);

  void setupMotors();
  void forwardA();
  void backwardA();
  void forwardB();
  void backwardB();
  void stopA();
  void stopB();
  void stop();

  int _enA;
  int _enB;
  int _in1;
  int _in2;
  int _in3;
  int _in4;
  int _SpeedA;
  int _SpeedB;

};
