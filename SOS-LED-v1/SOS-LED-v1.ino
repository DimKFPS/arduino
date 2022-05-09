// variables declaration (you may edit these instead)
int pinLED = 13; // The currently assigned pin to the LED
int offDelay = 100; // The time LED will be off
int shortDelay = 300; // The time LED will be on in a short time
int longDelay = 600; // The time LED will be on in a longer time
int endDelay = 1000; // The time LED will be off after the cycle ends

void setup() {
  // put your setup code here, to run once:
pinMode(pinLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

// The Letter S
digitalWrite(pinLED, HIGH);
delay(shortDelay);
digitalWrite(pinLED, LOW);
delay(offDelay);

digitalWrite(pinLED, HIGH);
delay(shortDelay);
digitalWrite(pinLED, LOW);
delay(offDelay);

digitalWrite(pinLED, HIGH);
delay(shortDelay);
digitalWrite(pinLED, LOW);
delay(offDelay);

// The Letter O
digitalWrite(pinLED, HIGH);
delay(longDelay);
digitalWrite(pinLED, LOW);
delay(offDelay);

digitalWrite(pinLED, HIGH);
delay(longDelay);
digitalWrite(pinLED, LOW);
delay(offDelay);

digitalWrite(pinLED, HIGH);
delay(longDelay);
digitalWrite(pinLED, LOW);
delay(offDelay);

// The Letter S
digitalWrite(pinLED, HIGH);
delay(shortDelay);
digitalWrite(pinLED, LOW);
delay(offDelay);

digitalWrite(pinLED, HIGH);
delay(shortDelay);
digitalWrite(pinLED, LOW);
delay(offDelay);

digitalWrite(pinLED, HIGH);
delay(shortDelay);
digitalWrite(pinLED, LOW);
delay(endDelay);
}
