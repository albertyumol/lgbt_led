int redPin = 11;
int greenPin = 9;
int bluePin = 10;
 
//uncomment this line if using a Common Anode LED
//#define COMMON_ANODE
 
void setup() {}

void loop() {
  analogWrite(redPin, random(0,255));
  analogWrite(greenPin, random(0,255));
  analogWrite(bluePin, random(0,255));
  delay(500);
}
