
// INIT POTENTIOMETERS

const int pot1Pin = 2;
const int pot2Pin = 3;
const int pot3Pin = 4;

int pot1Val = 0;
int pot2Val = 0;
int pot3Val = 0;

int lastPot1Val = 0;
int lastPot2Val = 0;
int lastPot3Val = 0;

// INIT SONAR

const int sonarTrigPin = 9;
const int sonarEchoPin = 10;

int time = 0;

int lastSonarVal = 0;


// SETUP

void setup() {
  pinMode(sonarTrigPin, OUTPUT);
  pinMode(sonarTrigPin, INPUT);
  
  Serial.begin(115200);  
}


// LOOP

void loop(){
  updatePot();
//  updateSonar();
}


// SEND MIDI MESSAGE

void MIDImessage(uint8_t status, uint8_t data1, uint8_t data2) {
  Serial.write(status);
  Serial.write(data1);
  Serial.write(data2);  
  }
