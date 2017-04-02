const int RED = 11;
const int GREEN = 9;
const int BLUE = 10;
void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop() {
  analogWrite(RED, 255);
  analogWrite(GREEN, 10);
  analogWrite(BLUE, 10);
  delay(1000);
  analogWrite(RED, 10);
  analogWrite(GREEN, 10);
  analogWrite(BLUE, 255);
  delay(1000);
  
}
