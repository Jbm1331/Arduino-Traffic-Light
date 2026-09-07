const int RED_PIN = 6;
const int YELLOW_PIN = 4;
const int GREEN_PIN = 2;

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
}

void loop() {

  //Green(Go)
  digitalWrite(GREEN_PIN, HIGH);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(RED_PIN, LOW);
  delay(4000);

  //Yellow(Slow)
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(YELLOW_PIN, HIGH);
  digitalWrite(RED_PIN, LOW);
  delay(1500);

  //Red(Stop)
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(RED_PIN, HIGH);
  delay(4000);
}
