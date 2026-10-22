# ESP32-
<img width="655" height="680" alt="Screenshot 2026-10-22 230612" src="https://github.com/user-attachments/assets/c55e4c6c-3e53-4906-8bab-b1854ed949c4" />






So I made a simple Dev-board based on ESP32-S3-WROOM-1 . It has a USB-C for Communication and has all possible pin available on the Rp2040 . Boot/EN Pins 3.3V Voltage regulator on board LEDS . I tried to make it in a concise design. It was designed On kicad. 


## Features
- The Board uses USB-C for power and data transfer
- The Board is based on ESP32-S3-WROOM-1
- We have an onboard 3.3V Voltage regulator (AP63203WU)
- We also have EN/Boot pin for booting and uploading new firmware
- there is 2 set of 20 connector pins that connects to all possible pin outlets available on the MCU
- The PCB was Designed on Kicad
- It is Breadboard Compatible


## Schematcics

<img width="726" height="626" alt="Screenshot 2026-10-17 224025" src="https://github.com/user-attachments/assets/ae19b328-037a-4a90-b35a-f35110955769" />



## PCB/CAD 

<img width="558" height="717" alt="Screenshot 2026-10-22 230830" src="https://github.com/user-attachments/assets/a8ee7ae6-d194-45e7-ad2d-657cd26295d9" />


<img width="655" height="680" alt="Screenshot 2026-10-22 230612" src="https://github.com/user-attachments/assets/72029631-ace3-4742-97a9-38f7527b3dbb" />
<img width="840" height="885" alt="Screenshot 2026-10-22 230618" src="https://github.com/user-attachments/assets/dd644732-5ad0-4b1f-9f34-b20a4ee2c815" />





## Bill of Materials (BOM)

| Designation | Comment | Quantity | Total Price ($) | Link |
|---|---|---:|---:|---|
| C1 | 47uF | 2 | 1.2342 | [JLCPCB](https://jlcpcb.com/partdetail/152108-GRM188R60J476ME15D/C140782) |
| C2 | 10uF | 2 | 0.5440 | [JLCPCB](https://jlcpcb.com/partdetail/20411-CL10A106KP8NNNC/C19702) |
| C3 | 100nF | 2 | 0.1640 | [JLCPCB](https://jlcpcb.com/partdetail/YAGEO-CC0603KRX7R9BB104/C14663) |
| C4, C5 | 22uF | 4 | 0.6260 | [JLCPCB](https://jlcpcb.com/partdetail/60514-CL10A226MQ8NRNC/C59461) |
| D1 | LED | 2 | 0.3940 | [JLCPCB](https://jlcpcb.com/partdetail/90993-NCD0603Y2/C89811) |
| J1 | USB_C_Receptacle_USB2.0_16P | 2 | 4.1336 | [JLCPCB](https://jlcpcb.com/partdetail/XKBConnection-USB31_TYPE_CFSABC/C2880583) |
| L1 | 4.7uH | 2 | 0.5020 | [JLCPCB](https://jlcpcb.com/partdetail/Sunlord-SDFL1608Q4R7KTF/C1034) |
| R1, R2 | 33 | 4 | 0.0480 | [JLCPCB](https://jlcpcb.com/partdetail/23867-0603WAF330JT5E/C23140) |
| R3, R4 | 5.1K | 4 | 0.0300 | [JLCPCB](https://jlcpcb.com/partdetail/23913-0603WAF5101T5E/C23186) |
| R7 | 1K | 2 | 0.0360 | [JLCPCB](https://jlcpcb.com/partdetail/21904-0603WAF1001T5E/C21190) |
| U2 | AP63203WU | 2 | 6.1155 | [JLCPCB](https://jlcpcb.com/partdetail/DiodesIncorporated-AP63203WU7/C780769) |
| U3 | ESP32-S3-WROOM-1 | 2 | 10.3502 | [JLCPCB](https://jlcpcb.com/partdetail/3522416-ESP32_S3_WROOM_1UN16R8/C3013946) |
| PCB Fabrication | PCB cost | 1 | 4.0000 | — |
| Shipping | Shipping fee | 1 | 11.8700 | — |
| Feeders Loading fee | Assembly service fee | 1 | 18.6000 | — |
| SMT Assembly | Assembly service fee | 1 | 0.8800 | — |
| X-Ray Inspection | Inspection fee | 1 | 3.3000 | — |
| Packaging fee | Packaging fee | 1 | 0.5000 | — |
| Special components fee | Special components fee | 1 | 0.0600 | — |
| **GRAND TOTAL** | **All components, PCB, shipping and fees** | — | **63.39** | — |

