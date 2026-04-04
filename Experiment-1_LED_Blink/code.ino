// arduino pins to which we'll connect the led 
int leds[3] = {2, 3, 4}; 

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 3; i++) {
    pinMode(leds[i], OUTPUT);
  }
  Serial.println("Enter a number (0-7): ");
}

void loop() {
  if (Serial.available() > 0) {
    int num = Serial.parseInt();

    if (num >= 0 && num <= 7) {
      Serial.print("Binary: ");
      
      for (int i = 0; i < 3; i++) {
        int bitVal = (num >> i) & 1;  
        digitalWrite(leds[i], bitVal);

        Serial.print(bitVal); 
      }

      Serial.println();
    } else {
      Serial.println("Invalid input! Enter number between 0 and 7.");
    }

    Serial.println("Enter next number:");
  }
}
