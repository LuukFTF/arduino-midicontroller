const int sonarTrigPin = 9;
const int sonarEchoPin = 10;

int lastSonarVal = 0;

void setup() {

// INIT SONAR
  pinMode(sonarTrigPin, OUTPUT);
  pinMode(sonarTrigPin, INPUT);
  
  Serial.begin(9600);  
}

void loop() {
  updateSonar();

}


void updateSonar() {
  long duration;
  int distance;
  
  int diff = 1;
  
  digitalWrite(sonarTrigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(sonarTrigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(sonarTrigPin, LOW);

  duration = pulseIn(sonarEchoPin, HIGH);

  distance = duration*0.034/2;

  int val1Diff = distance - lastSonarVal;
  
  Serial.print("Distance: ");
  Serial.println(distance);

  if (abs(val1Diff) > diff) {

  
    lastSonarVal = distance;
  }
  
}
