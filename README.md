# LED Fading with Arduino (PWM)  

This project demonstrates how to **fade an LED light bulb in and out smoothly** using **Pulse Width Modulation (PWM)** on an Arduino. The LED brightness gradually increases from OFF (0) to maximum brightness (255) and then decreases back down, creating a fading effect.  

---

## 🛠 Features  
- Uses **PWM (analogWrite)** to control LED brightness.  
- Smoothly **fades in and fades out** the LED.  
- Adjustable **speed** of fading by modifying the delay.  

---

## 📋 Requirements  

### Hardware  
- Arduino board (Uno, Nano, or compatible)  
- 1x LED (or small light bulb compatible with Arduino PWM)  
- 220Ω resistor (recommended to protect LED)  
- Jumper wires  
- Breadboard  

### Software  
- [Arduino IDE](https://www.arduino.cc/en/software)  

---

## ⚡ Pin Connections  

| Component | Arduino Pin |
|-----------|-------------|
| LED (+)   | 11 (PWM pin) |
| Resistor  | Between LED and pin 11 |
| LED (–)   | GND |

⚠️ **Note:** Always use a current-limiting resistor with LEDs to prevent damage.  

---

## 📂 Code Overview  

- **`fade`**: variable to store brightness values from 0–255.  
- **`led = 11`**: defines the PWM pin connected to the LED.  
- **`setup()`**: sets the LED pin as an output.  
- **`loop()`**:  
  - First `for` loop increases brightness from 0 → 255.  
  - Second `for` loop decreases brightness from 255 → 0.  
  - `delay(10)` controls the fading speed.  

---

## ▶️ Usage  

1. Connect the LED and resistor to **pin 11** and **GND**.  
2. Open the code in Arduino IDE.  
3. Upload the sketch to your Arduino.  
4. Watch the LED fade in and out continuously.  

---

## 🔮 Possible Improvements  

- Replace LED with a **small DC motor** or **light bulb** for variable intensity.  
- Use a **potentiometer** to control fade speed dynamically.  
- Add **multiple LEDs** on different PWM pins for patterns.  

---
