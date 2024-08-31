#include <Servo.h>
#define numOfValsRec 5
#define digitsPerValRec 1

Servo servoThumb;
Servo servoIndex;

int valsRec[numOfValsRec];
int stringLength = numOfValsRec * digitsPerValRec + 1;// $00
int counter = 0;
bool counterStart = false;
String recievedString;

void setup() {
  Serial.begin(9600);
  servoThumb.attach(9);
  servoIndex.attach(4);

}

void recieveData() {
  while(Serial.available())
  {
    char c = Serial.read();

    if (c == '$') {
      counterStart = true;
    }
    if (counterStart){
      if (counter < stringLength) {
        recievedString = String(recievedString+c);
        counter++;
      }
      if (counter >= stringLength){
        for (int i = 0; i<numOfValsRec; i++)
        { 
        int num = (i*digitsPerValRec)+1;
        valsRec[i] = recievedString.substring(num,num + digitsPerValRec).toInt();
        }
        recievedString = "";
        counter = 0;
        counterStart = false;
      }
    }

  }



}

void loop() {
  recieveData();
  
  if (valsRec[0] == 1) {
    servoThumb.write(90);
  } else {
    servoThumb.write(0);
  }
  
  if (valsRec[1] == 1) {
    servoIndex.write(100);
  } else {
    servoIndex.write(0);
  }
}

