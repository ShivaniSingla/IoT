const int led1 = 9;   // PWM pin
const int led2 = 10;  // PWM pin

unsigned long period = 1000; // 1 second PWM period

float duty1 = 0.25;  // 25% duty cycle
float duty2 = 0.75;  // 75% duty cycle

unsigned long previousMillis = 0;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  unsigned long onTime1 = period * duty1;
  unsigned long onTime2 = period * duty2;

  unsigned long timeInCycle = currentMillis % period;

  // LED 1 control
  if (timeInCycle < onTime1) {
    digitalWrite(led1, HIGH);
  } else {
    digitalWrite(led1, LOW);
  }

  // LED 2 control
  if (timeInCycle < onTime2) {
    digitalWrite(led2, HIGH);
  } else {
    digitalWrite(led2, LOW);
  }
}
