#include <Stepper.h>
#include "BluetoothSerial.h"
const int stepsPerRevolution = 2048; 
int flag;
#define IN1 19
#define IN2 18
#define IN3 5
#define IN4 17

Stepper myStepper(stepsPerRevolution, IN1, IN3, IN2, IN4);
BluetoothSerial ESP_BT;

void setup() {
  myStepper.setSpeed(15);
  Serial.begin(19200);
  ESP_BT.begin("ESP32_Control");
  // myStepper.step(stepsPerRevolution);

}

void loop(){
  if(ESP_BT.available() > 0)  {
    flag = ESP_BT.read();
    Serial.print("flag");
    Serial.print(flag);
    if(flag==0){
      Serial.print("Stepper Motor");
      myStepper.step(-stepsPerRevolution);
    }
    }
}
