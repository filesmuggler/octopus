/*
  MIT License
  ---
  Arduino Workshops
  Class #4
  Program purpose: Transistor based bridge H
  ---
  @author: Krzysztof Stezala
  ---
  Provided by CybAiR Science Club at 
  Institute of Control, Robotics and Information Engineering of
  Poznan University of Technology  
*/

#define A 9
#define B 11
#define C 6
#define D 10

void setup(){
    pinMode(A, OUTPUT);
    digitalWrite(A,LOW);
    pinMode(B, OUTPUT);
    digitalWrite(B,LOW);
    pinMode(C, OUTPUT);
    digitalWrite(C,LOW);
    pinMode(D, OUTPUT);
    digitalWrite(D,LOW);
}

void loop(){
    digitalWrite(B,HIGH);
    digitalWrite(D,HIGH);
}