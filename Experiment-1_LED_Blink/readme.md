# Experiment 1: Binary Display using LEDs (Serial Input)

## Objective
To take a number (0–7) from the Serial Monitor and display its binary equivalent using LEDs.

---

## Components Used
- Arduino Uno
- 3 LEDs
- 3 Resistors (220Ω)
- Breadboard
- Jumper wires

---

## ⚙️ Working Principle
The user inputs a number (0–7) via the Serial Monitor.  
The Arduino converts the number into binary and displays it using 3 LEDs.

Each LED represents one bit:
- LED on Pin 2 → LSB (Least Significant Bit)
- LED on Pin 3 → Middle bit
- LED on Pin 4 → MSB (Most Significant Bit)

---

## 🔌 Circuit Connections

| LED | Arduino Pin |
|-----|------------|
| LED 1 | Pin 2 | 
| LED 2 | Pin 3 |
| LED 3 | Pin 4 |

---
