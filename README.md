# ESP32-
<img width="571" height="687" alt="Screenshot 2026-10-09 233548" src="https://github.com/user-attachments/assets/255f7ed9-f536-4ac7-b158-091337055ea0" />


So I made a simple Dev-board based on ESP32-S3-WROOM-1 . It has a USB-C for Communication and has all possible pin available on the Rp2040 . Boot/EN Pins 3.3V Voltage regulator on board LEDS . I tried to make it in a concise design. It was designed On kicad. 

## Schematcics

<img width="695" height="566" alt="Screenshot 2026-10-04 234855" src="https://github.com/user-attachments/assets/b71227b4-cbdb-4ed6-be74-a41af40a02bf" />

## PCB/CAD 

<img width="627" height="642" alt="Screenshot 2026-10-09 233538" src="https://github.com/user-attachments/assets/23d99c1b-8d77-410a-8489-8b192808dce0" />

<img width="571" height="687" alt="Screenshot 2026-10-09 233548" src="https://github.com/user-attachments/assets/f2c9685f-d2fe-46d0-9e52-d9b95ae6bb2d" />
<img width="772" height="757" alt="Screenshot 2026-10-10 023615" src="https://github.com/user-attachments/assets/61fa029f-135a-4d00-9fb1-99b38e9d0b65" />

## BOM

| Designation | Comment | Quantity | Total Price ($) | Link |
|---|---|---:|---:|---|
| C1 | 47uf | 5 | 0.9745 | [JLCPCB](https://jlcpcb.com/partdetail/KyoceraAVX-TAJA476K006RNJ/C7190) |
| C3 | 100nf | 20 | 0.0260 | [JLCPCB](https://jlcpcb.com/partdetail/CCTC-TCC0201X5R104K100ZT/C5142565) |
| C4, C5 | 22uf | 8 | 1.4352 | [JLCPCB](https://jlcpcb.com/partdetail/2211-1206X226K100NT/C1859) |
| C6, C7 | C | 20 | 0.3660 | [JLCPCB](https://jlcpcb.com/partdetail/Sunlord-GZ2012D220TF/C1009) |
| D1 | LED | 6 | 0.4122 | [JLCPCB](https://jlcpcb.com/partdetail/XINGLIGHT-XL0201SURC/C3646923) |
| J1 | USB_C_Receptacle_USB2.0_16P | 2 | 1.0700 | [JLCPCB](https://jlcpcb.com/partdetail/SHOUHAN-USBC_0015IPX600/C783298) |
| L1 | 4.7uh | 20 | 0.4880 | [JLCPCB](https://jlcpcb.com/partdetail/Sunlord-SDFL1608Q4R7KTF/C1034) |
| R1, R2 | 33 | 20 | 0.0500 | [JLCPCB](https://jlcpcb.com/partdetail/23867-0603WAF330JT5E/C23140) |
| R3, R4 | 50K | 20 | 0.6360 | [JLCPCB](https://jlcpcb.com/partdetail/YAGEO-RT0603BRD0750KL/C861451) |
| R5, R6 | R | 6 | 0.5406 | [JLCPCB](https://jlcpcb.com/partdetail/FuzetecTech-FSMD050_0805R/C181350) |
| R7 | 1K | 20 | 0.0240 | [JLCPCB](https://jlcpcb.com/partdetail/SAE-1RC0201J0102/C54530604) |
| SW1, SW2 | SW_Push | 4 | 2.0232 | [JLCPCB](https://jlcpcb.com/partdetail/55982-DSIC01LHGET/C54957) |
| U2 | AP63203WU | 5 | 5.8950 | [JLCPCB](https://jlcpcb.com/partdetail/DiodesIncorporated-AP63203WU7/C780769) |
| U3 | ESP32-S3-WROOM-1 | 2 | 10.2772 | [JLCPCB](https://jlcpcb.com/partdetail/3198300-ESP32_S3_WROOM_1N16R8/C2913202) |
| C2 | 10uf | 20 | 0.0000 | [JLCPCB](https://jlcpcb.com/partdetail/56318658-GRM035R60G106ME01D/C53260764) |

### Total Cost

| Item | Price ($) |
|---|---:|
| Total Component Price | 24.22 |
| Loader | 13.65 |
| PCB Price | 4.00 |
| Shipping | 12.14 |
| **Grand Total** | **54.01** |
