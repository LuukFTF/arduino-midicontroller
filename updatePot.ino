// UPDATE POTENTIOMETERS

void updatePot(){
  
  int diff = 4;
  
  pot1Val = analogRead(pot1Pin);
  pot2Val = analogRead(pot2Pin);
  pot3Val = analogRead(pot3Pin);

  int potVal1diff = pot1Val - lastPot1Val;
  int potVal2diff = pot2Val - lastPot2Val;
  int potVal3diff = pot3Val - lastPot3Val;
  
  if (abs(potVal1diff) > diff) {
    MIDImessage(177, 0, map(pot1Val, 0, 1023, 0, 127));
    lastPot1Val = pot1Val;
    }

  if (abs(potVal2diff) > diff) {
    MIDImessage(177, 1, map(pot2Val, 0, 1023, 0, 127));
    lastPot2Val = pot2Val;
  }


  if (abs(potVal3diff) > diff) {
    MIDImessage(177, 2, map(pot3Val, 0, 1023, 0, 127));
    lastPot3Val = pot3Val;
  }

  delay(2);
}
