// UPDATE SONAR

void updateSonar() {
  long duration;
  int distance;
  
  int diff = 1;

  if(time > 10) { 
    digitalWrite(sonarTrigPin, LOW);
    delayMicroseconds(2);
  
    digitalWrite(sonarTrigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(sonarTrigPin, LOW);
  
    duration = pulseIn(sonarEchoPin, HIGH);
  
    distance = duration*0.034/2;
  
    int val1Diff = distance - lastSonarVal;
  
    if (abs(val1Diff) > diff && distance < 50) {
      MIDImessage(178, 1, map(distance, 0, 50, 0, 127));
      lastSonarVal = distance;
    }
    
    time++;
  }
  


}
