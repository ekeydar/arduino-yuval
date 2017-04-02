const int greenPin = 9;
const int bluePin = 10;
const int redPin = 11;


void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

}

void loop() {
  analogWrite(greenPin, 255);
  analogWrite(redPin,0);
  analogWrite(bluePin, 0);
  delay (8000);
  for (int i = 0 ; i < 3 ; i++) {
    analogWrite(greenPin,0);
    analogWrite(redPin,0);
    analogWrite(bluePin, 0);
    delay (500);
    analogWrite(greenPin,255);
    analogWrite(redPin,0);
    analogWrite(bluePin, 0);
    delay (500);
  }

  analogWrite(greenPin,0);
  analogWrite(redPin,0);
  analogWrite(bluePin, 0);
  delay (500);
  
  
  analogWrite(greenPin,255);
  analogWrite(redPin,255);
  analogWrite(bluePin,0);
  delay (1000);
  analogWrite(greenPin, 0);
  analogWrite(redPin,255);
  analogWrite(bluePin, 0);
  delay (10000);
  
    
}
