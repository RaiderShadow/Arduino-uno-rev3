
const int groenPins[] = {12, 13};
const int oranjePins[] = {10, 11};
const int roodPins[] = {8, 9};
const int knipperTijd = 300; 
const int groenTijd = 2000; 
const int oranjeTijd = 1000; 
const int wachtTijd = 2000;  


void zetAan(int pin1, int pin2) {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, HIGH);
}


void zetUit(int pin1, int pin2) {
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
}

void setup() {
  
  for (int i = 0; i < 2; i++) {
    pinMode(groenPins[i], OUTPUT);
    pinMode(oranjePins[i], OUTPUT);
    pinMode(roodPins[i], OUTPUT);
  }
}

void loop() {
  
  zetAan(groenPins[0], groenPins[1]);
  delay(groenTijd);

  
  zetUit(groenPins[0], groenPins[1]);
  zetAan(oranjePins[0], oranjePins[1]);
  delay(oranjeTijd);

  
  for (int i = 0; i < 3; i++) {
    zetAan(oranjePins[0], oranjePins[1]);
    delay(knipperTijd);
    zetUit(oranjePins[0], oranjePins[1]);
    delay(knipperTijd);
  }

  
  zetUit(oranjePins[0], oranjePins[1]);
  zetAan(roodPins[0], roodPins[1]);
  delay(wachtTijd);

  
  zetUit(roodPins[0], roodPins[1]);
}
