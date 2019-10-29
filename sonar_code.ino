//    Ultrasonic Sensor HC-SR04 and Arduino Tutorial
    // defines pins numbers
    const int trigPin = 9;
    const int echoPin = 10;
    #define led 11
    #define led2 12
    // defines variables
    long duration;
    int distance;
    void setup() {
    pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
    pinMode(echoPin, INPUT); // Sets the echoPin as an Input
    pinMode(led, OUTPUT);
    Serial.begin(9600); // Starts the serial communication
    }
    void loop() {
    // Clears the trigPin
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echoPin, HIGH);
    // Calculating the distance
    distance= duration*0.034/2;
    // Prints the distance on the Serial Monitor
    Serial.print("Distance: ");
    Serial.println(distance);
     if (distance < 4) {  // This is where the LED On/Off happens
    digitalWrite(led,HIGH); // When the Red condition is met, the Green LED should turn off
    digitalWrite(led2,LOW);
    }
    else {
      digitalWrite(led,LOW);
      digitalWrite(led2,HIGH);
    }
    if (distance >= 200 || distance <= 0){
      Serial.println("Out of range");
    }
    else {
      Serial.print(distance);
      Serial.println(" cm");
    }
    delay(500);
} 
    }
