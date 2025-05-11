# 🔌 ESP32 Automatic Pump Relay Test

This project uses an **ESP32** to **automatically test four pumps** via relays. It activates each pump for 3 seconds in sequence and prints status updates to the Serial Monitor.

---

## 🧰 Components Required

| Component         | Quantity |
|-------------------|----------|
| ESP32 Dev Board   | 1        |
| 4-Channel Relay Module | 1    |
| Water Pumps       | 4        |
| Jumper Wires      | as needed |
| External Power Supply (for pumps) | 1 |

---

## ⚙️ Pin Configuration

| Relay Channel | ESP32 GPIO |
|---------------|------------|
| IN1           | GPIO 16    |
| IN2           | GPIO 17    |
| IN3           | GPIO 18    |
| IN4           | GPIO 19    |

> ⚠️ **Note:** This sketch assumes an **active LOW** relay module (LOW = ON, HIGH = OFF).

---

## 🚀 How It Works

- At startup, all pumps are turned **OFF** (set to HIGH).
- In the `loop()`, each pump is:
  1. Turned **ON** for 3 seconds
  2. Turned **OFF** for 1 second
  3. Status is printed to Serial Monitor

The cycle repeats continuously.

---

## 🧪 Sample Output

Starting automatic pump test...
Testing Pump 1...
Testing Pump 2...
Testing Pump 3...
Testing Pump 4...

---

## 💡 Setup Notes

- Ensure that **your pump power source** is isolated from the ESP32 power supply to avoid voltage issues.
- You may need a transistor or optocoupler circuit if your relay doesn't support 3.3V signals from the ESP32.
- Test carefully with water pumps—do not run them dry!

---

## 📁 File Structure

📦 esp32-pump-relay-test
┣ 📜 main.ino
┣ 📜 README.md

---

## 📚 References

- [Relay Basics – How Relays Work](https://learn.sparkfun.com/tutorials/relays)
- [ESP32 GPIO Reference](https://randomnerdtutorials.com/esp32-pinout-reference-gpios/)

---

## 📝 License

MIT – Free for educational and personal use.

---

## 🤖 Future Improvements

- Add manual control via push buttons or web dashboard
- Integrate timing control via RTC or schedule
- Add water level or flow sensors for smarter control
