# Experiment: Controlling Two LEDs with Different Duty Cycles (PWM)

## Objective
To control two LEDs with different duty cycles while maintaining the same PWM period using Arduino.

---

## Components Used
- Arduino Uno
- 2 LEDs
- 2 × 220Ω Resistors
- Breadboard
- Jumper wires

---

## Working Principle

Pulse Width Modulation (PWM) controls brightness by varying the ON time of a signal within a fixed period.

In this experiment:
- Both LEDs share the same PWM period (1 second)
- Each LED has a different duty cycle:
  - LED 1 → 25%
  - LED 2 → 75%

---

## Circuit Connections

### LED 1
- Anode → Pin 9  
- Cathode → GND via 220Ω resistor  

### LED 2
- Anode → Pin 10  
- Cathode → GND via 220Ω resistor  

---
