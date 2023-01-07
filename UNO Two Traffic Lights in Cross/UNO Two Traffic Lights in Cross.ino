// declare pins
int green1 = 8;
int green2 = 13;
int yellow1 = 9;
int yellow2 = 12;
int red1 = 10;
int red2 = 11;


void setup() {
  // sets pins as output
  pinMode(green1, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
}

void loop() {
  // here you   can change which lights turn on when and for how long

  // green2 ON,   red1 ON
  digitalWrite(green1, LOW);
  digitalWrite(green2, HIGH);
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(red1, HIGH);
  digitalWrite(red2, LOW);
  delay(5000);
  // green2 ON, yellow2   ON, red1 ON
  digitalWrite(green1, LOW);
  digitalWrite(green2, HIGH);
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, HIGH);
  digitalWrite(red1, HIGH);
  digitalWrite(red2, LOW);
  delay(1000);
  // yellow2 ON,   red1 ON
  digitalWrite(green1, LOW);
  digitalWrite(green2, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, HIGH);
  digitalWrite(red1, HIGH);
  digitalWrite(red2, LOW);
  delay(2000);
  // red1 ON, red2   ON
  digitalWrite(green1, LOW);
  digitalWrite(green2, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  delay(2000);
  //green1 ON, red2 ON
  digitalWrite(green1, HIGH);
  digitalWrite(green2, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(red1, LOW);
  digitalWrite(red2, HIGH);
  delay(5000);
  // green1 ON, yellow1 ON, red2 ON
  digitalWrite(green1, HIGH);
  digitalWrite(green2, LOW);
  digitalWrite(yellow1, HIGH);
  digitalWrite(yellow2, LOW);
  digitalWrite(red1, LOW);
  digitalWrite(red2, HIGH);
  delay(1000);
  // yellow1 ON, red2 ON
  digitalWrite(green1, LOW);
  digitalWrite(green2, LOW);
  digitalWrite(yellow1, HIGH);
  digitalWrite(yellow2, LOW);
  digitalWrite(red1, LOW);
  digitalWrite(red2, HIGH);
  delay(2000);
  // red1 ON, red2 ON
  digitalWrite(green1, LOW);
  digitalWrite(green2, LOW);
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(red1, HIGH);
  digitalWrite(red2, HIGH);
  delay(2000);
}