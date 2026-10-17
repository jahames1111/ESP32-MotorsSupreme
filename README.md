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

| Designator | Footprint / Package | Quantity | Value / Description | LCSC Part # | Sourcing Resource Link |
| :--- | :--- | :---: | :--- | :---: | :--- |
| **U1** | SMD Module | 1 | ESP32-S2-WROVER | C6616601 | [LCSC Espressif Product Page](https://lcsc.com "Espressif Systems ESP32-S2-WROVER-I LCSC") |
| **U6, U7, U8, U9, U10, U11, U12, U13** | HTSSOP-16-1EP (4.4x5mm) | 8 | DRV8833PWP Motor Driver | C50506 | [LCSC TI DRV8833PWPR Product Detail](https://lcsc.com "LCSC TI DRV8833PWPR Product Detail") |
| **U2, U5** | TSSOP-28 (4.4x9.7mm) | 2 | PCA9685PW PWM Driver | C92206 | [LCSC NXP PCA9685PW Product Page](https://lcsc.com "NXP PCA9685PW LCSC") |
| **U3** | SOT-23-5 | 1 | MIC5219-3.3YM5 LDO Regulator | C29613 | [LCSC Microchip Product Page](https://lcsc.com "Microchip MIC5219-3.3YM5 LCSC") |
| **J22** | USB_C_Receptacle_HRO_TYPE-C-31-M-12 | 1 | USB-C 16-Pin Receptacle | C165948 | [LCSC Korea HRO Type-C Receptacle](https://lcsc.com "HRO TYPE-C-31-M-12 LCSC") |
| **D1, D2** | D_SMA | 2 | SS14 Schottky Diode | C2242 | [LCSC SS14 SMA Schottky Diode](https://lcsc.com "SS14 SMA LCSC") |
| **SW1, SW2** | SW_PUSH_6mm | 2 | Tactile Switch (6x6x5mm) | C318884 | [LCSC Tactile Switch Catalog](https://lcsc.com "Tactile Switch LCSC") |
| **C1** | CP_Radial_D8.0mm_P3.50mm | 1 | 470uF Leaded Electrolytic Capacitor | C5113945 | [LCSC 470uF Radial Capacitor Catalog](https://lcsc.com "470uf Radial Electrolytic LCSC") |
| **C2** | 1206 | 1 | 470uF Tantalum/Polymer Capacitor | C720397 | [LCSC 470uF 1206 Polymer Capacitor](https://lcsc.com "1206 470uF Capacitor LCSC") |
| **C10, C12 to C19, C3 to C9** | 1206 | 16 | 2.2uF MLCC Ceramic Capacitor | C14479 | [LCSC 2.2uF 1206 Ceramic Capacitor](https://lcsc.com "2.2uf 1206 Ceramic Capacitor LCSC") |
| **C11** | 1206 | 1 | 0.1uF MLCC Ceramic Capacitor | C14823 | [LCSC 0.1uF 1206 Ceramic Capacitor](https://lcsc.com "0.1uf 1206 Capacitor LCSC") |
| **R1, R2** | 1206 | 2 | 4.7kΩ Chip Resistor | C17901 | [LCSC Resistor Catalog (4.7kΩ)](https://lcsc.com "4.7k 1206 resistor LCSC") |
| **R3, R4, R5, R6** | 1206 | 4 | 5.1kΩ Chip Resistor | C25917 | [LCSC Resistor Catalog (5.1kΩ)](https://lcsc.com "5.1k 1206 resistor LCSC") |
| **J3 to J18** | PinHeader_1x02_P2.54mm_Vertical | 16 | 2-Pin Vertical Male Header | C124375 | [LCSC 1x02 2.54mm Pin Header](https://lcsc.com "1x02 Pin Header LCSC") |
| **J19, J20, J21** | PinHeader_1x16_P2.54mm_Vertical | 3 | 16-Pin Vertical Male Header | C124357 | [LCSC 1x16 2.54mm Pin Header](https://lcsc.com "1x16 Pin Header LCSC") |
| **J1** | SolderWire-1sqmm (D1.4mm) | 1 | BAT- Wire Connection Pad | — | *Direct wire Solder Pad (No Component)* |
| **J2** | SolderWire-1sqmm (D1.4mm) | 1 | BAT+ Wire Connection Pad | — | *Direct wire Solder Pad (No Component)* |

**Total Cost: \$58.83 USD**

<img width="1144" height="812" alt="Screenshot 2026-10-06 063157" src="https://github.com/user-attachments/assets/a54c817c-3c18-4bb7-b985-3f26423c6bcc" />
<img width="1020" height="847" alt="Screenshot 2026-10-06 063221" src="https://github.com/user-attachments/assets/f648e58b-d1e7-4f27-9815-68eb04bd6362" />
