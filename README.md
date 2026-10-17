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
| Designator | Footprint / Package | Quantity | Value / Description | LCSC Part # / MPN | Sourcing Resource Link |
| :--- | :--- | :---: | :--- | :---: | :--- |
| **U1** | VFQFN-56-EP | 1 | ESP32-S2-WROVER Module | C7274976 | [LCSC Product Page](https://lcsc.com) |
| **U6, U7, U8, U9, U10, U11, U12, U13** | HTSSOP-16-1EP | 8 | DRV8833PWPR Motor Driver IC | C50506 | [LCSC Product Page](https://www.lcsc.com/product-detail/C50506.html) |
| **U2, U5** | TSSOP-28 | 2 | PCA9685PW,118 PWM Driver IC | C2678753 | [LCSC Product Page](https://lcsc.com) |
| **U3** | SOT-23-5L | 1 | HMIC5219-3.3YM5 LDO Regulator | C41381680 | [LCSC Product Page](https://lcsc.com) |
| **J22** | SMD / TYPE-C-31-M-12 | 1 | USB-C (USB TYPE-C) Receptacle | C165948 | [LCSC Product Page](https://lcsc.com) |
| **D1, D2** | SMA (DO-214AC) | 2 | SS14 40V 1A Schottky Diode | C2480 | [LCSC Product Page](https://lcsc.com) |
| **SW1, SW2** | Through Hole (6x6mm) | 2 | TS665CJ Tactile Switch SPST 5mm | C393938 | [LCSC Product Page](https://lcsc.com) |
| **C1 to C19** | 1206 | 19 | CL31A106KBHNNNE 10uF 50V Ceramic | C13585 | [LCSC Product Page](https://lcsc.com) |
| **R1, R2** | 1206 | 2 | FRC1206F4701TS 4.7kΩ ±1% Resistor | C2907387 | [LCSC Product Page](https://lcsc.com) |
| **R3, R4, R5, R6** | 1206 | 4 | FRC1206J512 TS 5.1kΩ ±5% Resistor | C2907509 | [LCSC Product Page](https://lcsc.com) |
| **J3 to J18** | PinHeader_1x02_P2.54mm_Vertical | 16 | 2-Pin Vertical Male Pin Header Strip | — | *Standard 2.54mm pitch hardware connectors* |
| **J19, J20, J21** | PinHeader_1x16_P2.54mm_Vertical | 3 | 16-Pin Vertical Male Pin Header Strip | — | *Standard 2.54mm pitch hardware connectors* |
| **J1** | SolderWire-1sqmm (D1.4mm) | 1 | BAT- Wire Connection Pad | — | *Direct wire Solder Pad (No Component)* |
| **J2** | SolderWire-1sqmm (D1.4mm) | 1 | BAT+ Wire Connection Pad | — | *Direct wire Solder Pad (No Component)* |



**Total Cost: \$58.83 USD**

<img width="1144" height="812" alt="Screenshot 2026-10-06 063157" src="https://github.com/user-attachments/assets/a54c817c-3c18-4bb7-b985-3f26423c6bcc" />
<img width="1020" height="847" alt="Screenshot 2026-10-06 063221" src="https://github.com/user-attachments/assets/f648e58b-d1e7-4f27-9815-68eb04bd6362" />
