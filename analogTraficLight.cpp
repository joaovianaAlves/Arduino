int RedPin = A3;
int YellowPin = A2;
int GreenPin = A1;

int DelayLong = 5000;
int DelayFast = 1000;

void setup() {
  pinMode(RedPin, OUTPUT);
  pinMode(YellowPin, OUTPUT);
  pinMode(GreenPin, OUTPUT);
}

void loop() {
    analogWrite(GreenPin, 0);
    analogWrite(RedPin, 255);
    delay(DelayLong);

    analogWrite(RedPin, 0);
    analogWrite(YellowPin, 255);
    delay(DelayFast);
    
    analogWrite(YellowPin, 0);
    analogWrite(GreenPin, 255);
    delay(DelayLong);
}
