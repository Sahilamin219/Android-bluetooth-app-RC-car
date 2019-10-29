#define echoPin = 1
#define sendsignal = 2
#define servomotor1 = 3
#define servomotor2 = 4

void setup() {
  // put your setup code here, to run once:
  pinMode(echoPin, OUTPUT);
  pinMode(sendsignal, OUTPUT);
  pinMode(servomotor1, OUTPUT);
  pinMode(servomotor2, OUTPUT);
  echoPin = echoValue;
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(echosignal, HIGH);
  int echoValue = digitalRead(echoPin);
  if(echoValue == HIGH){
    Serial.println("Object Found !!!");
  }
  else{
    Serial.println("Object NOT Found !??");
  }
  delay(100);
}
