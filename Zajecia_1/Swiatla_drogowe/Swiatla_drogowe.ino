/*
  MIT License
  ---
  Arduino Workshops
  Class #1
  Program purpose: Traffic lights simulator
  ---
  @author: Krzysztof Stezala
  ---
  Provided by CybAiR Science Club at 
  Institute of Control, Robotics and Information Engineering of
  Poznan University of Technology  
*/

#define RED_CAR 13
#define YELLOW_CAR 12
#define GREEN_CAR 11
#define RED_PED 10
#define GREEN_PED 9
#define BUTTON_PED 8

void setup(){
    pinMode(RED_CAR, OUTPUT);
    pinMode(YELLOW_CAR, OUTPUT);
    pinMode(GREEN_CAR, OUTPUT);
    pinMode(RED_PED, OUTPUT);
    pinMode(GREEN_PED, OUTPUT);
    pinMode(BUTTON_PED, INPUT);
    digitalWrite(GREEN_CAR, HIGH);
    digitalWrite(RED_PED, HIGH);
}

void trafficLights(){
    delay(2000);
    digitalWrite(GREEN_CAR,LOW);
    delay(700);
    digitalWrite(YELLOW_CAR,HIGH);
    delay(700);
    digitalWrite(YELLOW_CAR,LOW);
    digitalWrite(RED_CAR,HIGH);    
    digitalWrite(RED_PED,LOW);
    digitalWrite(GREEN_PED,HIGH);

    delay(5000);
    digitalWrite(RED_PED,HIGH);
    digitalWrite(GREEN_PED,LOW);
    digitalWrite(YELLOW_CAR,HIGH);
    delay(500);
    digitalWrite(RED_CAR,LOW);
    digitalWrite(YELLOW_CAR,LOW);
    digitalWrite(GREEN_CAR,HIGH);
    
}

void loop(){
    if(digitalRead(BUTTON_PED)==HIGH)
    {        
        //change the traffic lights
        trafficLights();
    }
}