void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);

  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7, HIGH);
  delay(1500);
  digitalWrite(7, LOW);
  delay(1500);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  delay(1500);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);  
  digitalWrite(12,LOW);
  digitalWrite(13, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(1500);
  digitalWrite(7, HIGH);
  delay(1500);
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(6, HIGH);
  delay(1500);
  digitalWrite(13, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(6, LOW);
  delay(1500);
  digitalWrite(4, HIGH);
  digitalWrite(7, LOW);
  delay(1500);
  digitalWrite(9, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(1500);
    digitalWrite(9, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(1500);
}
