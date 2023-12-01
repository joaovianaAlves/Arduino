int ReadPin = A5;
float VoltCalc = 0;
void setup() {
  pinMode(ReadPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  VoltCalc =  (5. / 1023.) * (analogRead(ReadPin));
  Serial.println(VoltCalc);
  delay(500);
}
