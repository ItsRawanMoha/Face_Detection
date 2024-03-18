#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;


char number[50];
char c;
int state = 0;
String myStringRec;
int stringCounter = 0;
bool stringCounterStart = false;
String myRevivedString;
int stringLength = 6;

int hmyservo1,hmyservo2,hmyservo3,hmyservo4,hmyservo5;
int myVals[] ={0,0,0,0,0} ;

int myButton= 1;
bool portable;

void setup() {

  Serial.begin(9600);
  myservo1.attach(6);
  myservo2.attach(3);
  myservo3.attach(2);
  myservo4.attach(5);
  myservo5.attach(4);
  myButton = analogRead(A1);
  delay(500);
  if (myButton == 0){portable = false;}
  else {portable = true;}
  
}

void loop() {

myButton = analogRead(A0);
if (portable == true){
  if (myButton == 0){
      allOFF();}
  else{
      allON();}
}
else{
  
receiveData();
if (hmyservo1 ==1){  myservo1.write(90);}else{myservo1.write(0);}
if (hmyservo2 ==1){  myservo2.write(90);}else{myservo2.write(0);}
if (hmyservo3 ==1){  myservo3.write(90);}else{myservo3.write(0);}
if (hmyservo4 ==1){  myservo4.write(90);}else{myservo4.write(0);}
if (hmyservo5 ==1){  myservo5.write(90);}else{myservo5.write(0);}
}

}


void allON(){
  
myservo1.write(90);
myservo2.write(90);
myservo3.write(90);
myservo4.write(90);
myservo5.write(90);
  
  }


void allOFF(){
  
myservo1.write(0);
myservo2.write(0);
myservo3.write(0);
myservo4.write(0);
myservo5.write(0);
}


void receiveData() {
  int i = 0;
  while (Serial.available()) {
   char c = Serial.read();
  
    if (c == '$') {
      stringCounterStart = true;
    }
    if (stringCounterStart == true )
    {
      if (stringCounter < stringLength)
      {
        myRevivedString = String(myRevivedString + c);
        stringCounter++;
      }
      if (stringCounter >= stringLength) {
        stringCounter = 0; stringCounterStart = false;
        hmyservo1 = myRevivedString.substring(1, 2).toInt();
        hmyservo2 = myRevivedString.substring(2, 3).toInt();
        hmyservo3 = myRevivedString.substring(3, 4).toInt();
        hmyservo4 = myRevivedString.substring(4, 5).toInt();
        hmyservo5 = myRevivedString.substring(5, 6).toInt();
//        Serial.print(servoPinky);
//        Serial.print(" ");
//        Serial.print(servoRing);
//        Serial.print(" ");
//        Serial.print(servoMiddle);
//        Serial.print(" ");
//        Serial.print(servoIndex);
//        Serial.print(" ");
//        Serial.println(servoThumb);       
        myRevivedString = "";
      }
    }
  }
}