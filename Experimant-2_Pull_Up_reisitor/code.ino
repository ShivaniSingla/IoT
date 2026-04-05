int counter = 0;

const int buttonPin = 2;
const int ledPin = 13;

unsigned long previousMillis = 0;
int ledState = LOW;

int lastButtonState = HIGH;

void setup() {
  Serial.begin(9600);
  Serial.println("System Started");

  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  // -------- BUTTON --------
  int reading = digitalRead(buttonPin);

  if (reading == LOW && lastButtonState == HIGH) {
    delay(50); // debounce

    if (digitalRead(buttonPin) == LOW) {
      counter++;
      counter = counter % 3;

      Serial.print("Counter: ");
      Serial.println(counter);
    }
  }

  lastButtonState = reading;

  // -------- LED --------
  int interval;

  if (counter == 0) interval = 500;
  else if (counter == 1) interval = 300;
  else interval = 100;

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    ledState = !ledState;
    digitalWrite(ledPin, ledState);
  }
}
