// Green LED connected to pin 8
// Red LED connected to pin 9

int greenLED = 8;
int redLED = 9;
String voice;

void setup() {
  Serial.begin(9600);
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {
  while (Serial.available()) {
    delay(10); // allow buffer to fill
    char c = Serial.read();
    voice += c;
  }

  voice.trim(); // remove white spaces

  if (voice.length() > 0) {
    Serial.println("Command received: " + voice);
    
    // Commands for GREEN LED
    if (voice == "bulb on") {
      digitalWrite(greenLED, HIGH);
    } 
    else if (voice == "bulb off") {
      digitalWrite(greenLED, LOW);
    }

    // Commands for RED LED
    else if (voice == "fan on") {
      digitalWrite(redLED, HIGH);
    } 
    else if (voice == "fan off") {
      digitalWrite(redLED, LOW);
    }

    // Clear the command after processing
    voice = "";
  }
}