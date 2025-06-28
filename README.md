# 🌍 Arduino-Based Disaster Alert System with Telegram Integration 🚨

## 📌 Project Overview

This project is a real-time **Disaster Alert System** that detects environmental hazards such as **fire**, **flood**, and **earthquake** using an Arduino microcontroller connected to dedicated sensors. Upon detection of any critical event, the system instantly communicates the alert to a designated **Telegram chat** using a Python script running on a connected computer. 

This system is especially useful for:
- Early disaster warning in homes, schools, offices, or remote locations.
- Sending real-time alerts to emergency responders or stakeholders.
- Low-cost safety automation in disaster-prone regions.

---

## ⚙️ System Architecture

### 1. **Sensor Integration (Arduino)**
The Arduino board is interfaced with:
- A **Flame Sensor** to detect fire.
- A **Water Level Sensor** to detect flooding.
- A **Vibration Sensor** to detect seismic activity.

Each sensor continuously monitors the environment and sends the respective alert message to the serial port when a threshold is crossed.

### 2. **Serial Communication**
The Arduino sends specific text-based alerts (e.g., "Fire detected!") via the serial port when a sensor is triggered.

### 3. **Python-Based Telegram Integration**
A Python script runs on a PC connected to the Arduino via USB. This script:
- Continuously listens for messages from the Arduino via the serial port.
- Matches the incoming message with predefined disaster types.
- Sends a corresponding alert to a pre-configured **Telegram chat** using the Telegram Bot API.

---

## 🔧 Hardware Requirements

| Component           | Description                             |
|--------------------|-----------------------------------------|
| Arduino Uno/Nano    | Microcontroller for sensor integration |
| Flame Sensor        | Detects open flame                      |
| Water Level Sensor  | Detects flood conditions                |
| Vibration Sensor    | Detects seismic activity                |
| USB Cable           | For serial connection to computer       |
| Computer with Python| Runs the alert-sending script           |

---

## 💻 Software Requirements

- **Arduino IDE** – For uploading sensor code to the Arduino.
- **Python 3.x** – For running the Telegram integration script.
- **Python Libraries:**
  - `pyserial` – For reading from the serial port.
  - `requests` – For sending messages to the Telegram Bot API.

---

## 🚀 How to Use

1. **Set up the hardware** by connecting the sensors to the specified Arduino pins.
2. **Upload the Arduino sketch** to the board using the Arduino IDE.
3. **Create a Telegram bot** using [@BotFather](https://t.me/BotFather) and get your `bot token`.
4. **Get your Telegram chat ID** using a Telegram bot like `@userinfobot`.
5. **Configure the Python script** with your bot token and chat ID.
6. **Run the Python script** on your PC while the Arduino is connected via USB.
7. **Test the system** by triggering the sensors and verify if the alert reaches your Telegram app.

---

## ✅ Features

- 🔥 **Fire Detection**
- 🌊 **Flood Detection**
- 🌍 **Earthquake Detection**
- 📩 **Real-time Telegram Alerts**
- 💻 Simple Serial Communication
- ⚡ Instant Notifications on Mobile

---

## 📈 Applications

- Home safety systems
- Smart building alert systems
- Industrial disaster monitoring
- Early warning systems in remote areas
- Educational demonstration for IoT and embedded systems

---

## 📦 Future Enhancements

- Integration with GPS for location-based alerting
- Support for multiple Telegram recipients
- SMS and Email alert capabilities
- Cloud dashboard with alert history
- IoT-based remote monitoring and data logging

---

## ⚠️ Disclaimer

This project is a **prototype model for educational and prototyping purposes**. It should not be solely relied upon for critical safety decisions. For commercial or life-critical applications, ensure the use of certified hardware, redundant systems, and professional-grade software.

---

## 🔒 License & Usage

> **© 2025 – All rights reserved.**
>
> The code and concept are the intellectual property of the author.  
> **Unauthorized copying, reproduction, or commercial use of this project or any part thereof is strictly prohibited without prior written permission from the author.**

---

## 👤 Author

**Karthikeya V**  
📧 *vkarthikeya1910@gmail.com*  
🔗 *[LinkedIn Profile](www.linkedin.com/in/vk191003)*  
🛠️ Passionate about DevOps, Embedded SYstems and IoT.

---

