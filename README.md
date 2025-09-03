# 🚗 Arduino Bluetooth RC Car (HC-05 + L298N)

A **DIY Arduino RC Car** controlled wirelessly using **Bluetooth (HC-05)** and a mobile app 📱.  
It uses the **L298N Motor Driver** to control two DC motors attached to **4 wheels** on a lightweight **cardboard chassis**.  
This project demonstrates the basics of **robotics, motor control, and wireless communication** in a fun and practical way. 🎯

---

## 🔧 Components Used
- 🟦 Arduino Uno / Nano  
- 📡 HC-05 Bluetooth Module  
- ⚙️ L298N Motor Driver Module  
- 🔩 2 × DC Motors (driving 4 wheels via gear mechanism)  
- 📦 Cardboard chassis with 4 wheels  
- 🔋 Li-ion Battery Pack / 9V Battery  
- 🔌 Jumper Wires  

---

## ⚡ Wiring Connections

### Arduino ↔ L298N Motor Driver
| Arduino Pin | L298N Pin | Function |
|-------------|-----------|----------|
| `2`         | IN1       | Motor A direction |
| `4`         | IN2       | Motor A direction |
| `3` (PWM)   | ENA       | Motor A speed |
| `6`         | IN3       | Motor B direction |
| `7`         | IN4       | Motor B direction |
| `5` (PWM)   | ENB       | Motor B speed |

### Arduino ↔ HC-05 Bluetooth
| Arduino Pin | HC-05 Pin |
|-------------|-----------|
| `TX` (D1)   | RX        |
| `RX` (D0)   | TX        |
| `5V`        | VCC       |
| `GND`       | GND       |

---

## 🎮 Mobile App Controls

Control the car using the **Arduino Bluetooth Controller App** (available on Play Store).  
After pairing with **HC-05** (`1234` / `0000`), use these commands:

| Command | Action |
|---------|--------|
| 🡹 `F`  | Move Forward |
| 🡻 `B`  | Move Backward |
| 🡸 `L`  | Turn Left |
| 🡺 `R`  | Turn Right |

---

## 🔄 How It Works
1. 🔋 Power ON Arduino, L298N, and HC-05.  
2. 📲 Pair smartphone with HC-05 via Bluetooth.  
3. ▶️ Open the **Bluetooth Controller App** and connect.  
4. 🎮 Send commands (`F`, `B`, `L`, `R`).  
5. ⚡ Arduino interprets commands → controls **L298N** → motors rotate → car moves 🚗💨  

---

## 🚀 Future Improvements
- 🤖 Add **ultrasonic sensor** for obstacle avoidance  
- 🛣️ Add **IR sensors** for line-following mode  
- 🎚️ Enable **PWM speed control** via mobile app  
- 🛠️ Upgrade chassis: **cardboard → acrylic / 3D-printed**  
- 🌐 Use **ESP32** for Wi-Fi / IoT control  

---

## 👨‍💻 Developer
**Kamal Singh Sukheeja**  
Robotics & Automation Student | IoT & Embedded Systems Enthusiast
