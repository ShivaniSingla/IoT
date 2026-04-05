# Experiment: Button-Controlled LED using Internal Pull-Up Resistor

## Objective
To control LED blinking speed using a push button while demonstrating the use of an **internal pull-up resistor** and avoiding floating input.

---

## Components Used
- Arduino Uno
- Push Button
- LED
- 220Ω Resistor (for LED)
- Breadboard
- Jumper wires

---

## Working Principle

Digital input pins can behave unpredictably if left unconnected (floating).  
To ensure stable readings, a **pull-up resistor** is used.

In this experiment:
- The Arduino's **internal pull-up resistor** is enabled using `INPUT_PULLUP`
- The input pin remains **HIGH by default**
- When the button is pressed, the pin is connected to **GND**, making it **LOW**

---

## Circuit Connections

### Button (Internal Pull-Up Configuration)
- One terminal → GND  
- Other terminal → Pin 2  

> No external resistor is required because Arduino provides an internal pull-up (~20kΩ).

---

### LED
- Anode (long leg) → Pin 13 via 220Ω resistor  
- Cathode (short leg) → GND via 220Ω resistor  

---

## Key Concept: Pull-Up Resistor

Without a pull-up resistor:
- The input pin becomes **floating**
- It may randomly read HIGH or LOW

With internal pull-up:
- Default state → HIGH  
- Button pressed → LOW  

| State | Pin Value |
|------|----------|
| Not pressed | HIGH |
| Pressed | LOW |

---
