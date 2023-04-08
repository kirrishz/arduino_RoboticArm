#include <Servo.h>


#define numberOfValuesReceived 3
#define digitsPerValueReceived 1


Servo servoIndex;
Servo servoMiddle;
Servo servoRing;

int receivedValues[numberOfValuesReceived];
int stringLength = numberOfValuesReceived * digitsPerValueReceived + 1; // +1 for the '$' // $10101

int counter = 0;
bool counterStart = false;
String receivedString;


void setup() {
  Serial.begin(9600);

  servoIndex.attach(10);
  servoMiddle.attach(11);
  servoRing.attach(12);

}

void loop() {
  receiveData();
  if (receivedValues[0] == 1){servoIndex.write(90);} else{servoIndex.write(0);}
  if (receivedValues[1] == 1){servoMiddle.write(90);} else{servoMiddle.write(0);}
  if (receivedValues[2] == 1){servoRing.write(180);} else{servoRing.write(0);}

  
}

void receiveData() {
  while (Serial.available()) {
    char c = Serial.read();
    if (c == '$') {
      counterStart = true;
    }
    if (counterStart) {
      if (counter < stringLength) {
        receivedString = String(receivedString + c);
        counter++;
        } 
      if (counter >= stringLength) {
       
        for (int n = 0; n < numberOfValuesReceived; n++) 
        {
          // receivedValues[n] = receivedString.substring((n * digitsPerValueReceived) + 1, (n * digitsPerValueReceived) + 1 + digitsPerValueReceived).toInt();
          int num = (n * digitsPerValueReceived) + 1;
          receivedValues[n] = receivedString.substring(num, num + digitsPerValueReceived).toInt();
        }
        receivedString = "";
        counter = 0;
        counterStart = false;
      }
    }
  }
}
