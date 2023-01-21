void setup() {
  // put your setup code here, to run once:
  pinMode(13, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(13) == HIGH) {
    Serial.println("Hello World!");
  }
  else {
    Serial.println("It's 2023");
  }
}
