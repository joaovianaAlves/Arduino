int RedPin = 9;
int YellowPin = 10;
int GreenPin = 11;

int DelayLong = 5000;
int DelayFast = 1000;

void setup() {
  pinMode(RedPin, OUTPUT);
  pinMode(YellowPin, OUTPUT);
  pinMode(GreenPin, OUTPUT);
}

void loop() {

    digitalWrite(GreenPin, LOW);
    digitalWrite(RedPin, HIGH);
    delay(DelayLong);

    digitalWrite(RedPin, LOW);
    digitalWrite(YellowPin, HIGH);
    delay(1000);
    
    digitalWrite(YellowPin, LOW);
    digitalWrite(GreenPin, HIGH);
    delay(DelayLong);

}
