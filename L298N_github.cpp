/*
 * Written by Anastasiou Nikos *
 * For improvements or bugs    *
 * Contact me using email      *
 * nikolas619065@gmail.com     *
 */
#include "L298N_github.h"


L298Ns::L298Ns(int enA, int in1, int in2, int in3, int in4, int enB){
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

   _enA = enA;
   _enB = enB;
   _in1 = in1;
   _in2 = in2;
   _in3 = in3;
   _in4 = in4;
}

L298Ns::L298Ns(int in1, int in2, int in3, int in4){
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
   _in1 = in1;
   _in2 = in2;
   _in3 = in3;
   _in4 = in4;
}

L298Ns::L298Ns(int enA, int in1, int in2){
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

   _enA = enA;
   _in1 = in1;
   _in2 = in2;
}

L298Ns::L298Ns(int in1, int in2){
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

   _in1 = in1;
   _in2 = in2;
}

void L298Ns::forwardA(){
  analogWrite(_enA, _SpeedA);
  digitalWrite(_in1, HIGH);
  digitalWrite(_in2, LOW);

}

void L298Ns::forwardB(){
  analogWrite(_enB, _SpeedB);
  digitalWrite(_in3, LOW);
  digitalWrite(_in4, HIGH);

}

void L298Ns::backwardA(){
  analogWrite(_enA, _SpeedA);
  digitalWrite(_in1, LOW);
  digitalWrite(_in2, HIGH);

}

void L298Ns::backwardB(){
  analogWrite(_enB, _SpeedB);
  digitalWrite(_in3, HIGH);
  digitalWrite(_in4, LOW);

}

void L298Ns::stopA(){
    digitalWrite(_in1, LOW);
    digitalWrite(_in2, LOW);
	analogWrite(_enA, 0);
  }
  
void L298Ns::stopB(){
    digitalWrite(_in3, LOW);
    digitalWrite(_in4, LOW);
	analogWrite(_enB, 0);


}

void L298Ns::stop(){
    digitalWrite(_in1, LOW);
    digitalWrite(_in2, LOW);
	analogWrite(_enA, 0);
  
    digitalWrite(_in3, LOW);
    digitalWrite(_in4, LOW);
	analogWrite(_enB, 0);


}
