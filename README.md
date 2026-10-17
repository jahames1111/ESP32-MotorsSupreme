<img width="1351" height="873" alt="Screenshot 2026-10-06 203231" src="https://github.com/user-attachments/assets/89281944-c599-403f-a453-5899e4cd3786" />


# ESP32-MotorsSupreme

A huge motor driver board based on ESP32 featuring capacitors and motor/servo output pins everywhere. 
This project was created mainly for testing old servos that I have lying around at the beginning of a new project to see what works or not.
It will be much used, as I have dozens of servos that I don't know if they work or not. This will let me test them with certainty.

## Features

- 8 DRV8833 motor drivers for 16 2-directional PWM motor outputs
- 2 PCA9685 chips for servo outputs and one pin of the DRV channels (the other is the ESP pin)
- 16 ESP32-S2 WROVER pins for DRV direction control
- Built for testing nonworking motors and servos
<img width="3508" height="2480" alt="image" src="https://github.com/user-attachments/assets/b541f843-e8fc-40c7-aa73-583b09e2ad5c" />

## BOM

| Component | Quantity | Price | Product Link |
| :--- | :---: | :---: | :--- |
| **ESP32-S2-WROVER Module** | 1 | \$14.04 | [LCSC Source Link](https://lcsc.com) |
| **DRV8833PWPR Motor Driver IC** | 8 | \$9.68 | [TI Datasheet / Sourcing Link](https://lcsc.com) |
| **PCA9685PW PWM Driver IC** | 2 | \$6.70 | [LCSC Source Link](https://lcsc.com) |
| **10uF Ceramic Capacitor (1206)** | 10 | \$2.75 | [LCSC Source Link](https://lcsc.com) |
| **Tactile Switch (6x6mm)** | 50 | \$0.93 | [LCSC Source Link](https://lcsc.com) |
| **SS14 Schottky Diode (SMA)** | 50 | \$0.94 | [LCSC Source Link](https://lcsc.com) |
| **USB-C 16-Pin Receptacle** | 5 | \$0.87 | [LCSC Source Link](https://lcsc.com) |
| **MIC5219-3.3YM5 LDO Regulator** | 5 | \$0.81 | [LCSC Source Link](https://lcsc.com) |
| **4.7kΩ Resistor (1206)** | 100 | \$0.54 | [LCSC Source Link](https://lcsc.com) |
| **5.1kΩ Resistor (1206)** | 100 | \$0.47 | [LCSC Source Link](https://lcsc.com) |
| **PCB (JLCPCB)** | 5 (min qty) | \$21.10 | [JLCPCB Prototype Service](https://jlcpcb.com) |

**Total Cost: \$58.83 USD**

<img width="1144" height="812" alt="Screenshot 2026-10-06 063157" src="https://github.com/user-attachments/assets/a54c817c-3c18-4bb7-b985-3f26423c6bcc" />
<img width="1020" height="847" alt="Screenshot 2026-10-06 063221" src="https://github.com/user-attachments/assets/f648e58b-d1e7-4f27-9815-68eb04bd6362" />
