# Smart Contactless Body Temperature Scanning Station.
# ESPhome

![Image of Product](https://github.com/ceaswaran/Smart-Contactless-Body-Temperature-Scanning-Station-ESP-Home-/blob/master/Body%20scanner_001.6-001.jpg)

**ABOUT THE PROJECT:**
Smart Contactless Body Temperature Scanning Station is contactless thermal temperature scanner. It operates automatically without needing an operator. 
The device automatically detects a person when they come close to the sensor (2cm-5cm) and reads their body temperature. 
The infrared thermal temperature scanner helps to detect if a person has a high body temperature which help in identifying the symptoms of illness. 
It can be used in any place in line with Home Integration platform which supports ESP Home Integration (Ex: Home Assistant).

**BASIC FEATURES:**
* Contactless Measuring. 
* DIY/Low Cost.
* OLED Display.
* Buzzer Alert.
* ESP Home Firmware.
* Integration with Smart Home Platforms.

**Bill Of Materials:**
1. Infrared thermometer Module (MLX90614). Qty =1 
(https://www.amazon.in/xcluma-MLX90614-Contactless-Temperature-Sensor/dp/B073DDV1GB/ref=sr_1_4?crid=TMTAFFV455H4&dchild=1&keywords=mlx90614&qid=1596427208&sprefix=mlx%2Caps%2C286&sr=8-4)
(https://www.amazon.com/MLX90614ESF-Non-Contact-Infrared-Temperature-Arduino/dp/B07YZVDWWB/ref=sr_1_1?crid=2EPP9VDRI7V5U&dchild=1&keywords=mlx90614&qid=1596427203&sprefix=mlx%2Caps%2C438&sr=8-1)

2. Obstacle sensor Module (TCRT5000). Qty = 1 
(https://www.amazon.in/TCRT5000-Module-Infrared-sensor/dp/B08DSCG9XM/ref=sr_1_1?dchild=1&keywords=TCRT5000&qid=1596427297&sr=8-1)
https://www.amazon.com/OSOYOO-Infrared-Obstacle-Avoidance-Arduino/dp/B01I57HIJ0/ref=sr_1_2?dchild=1&keywords=TCRT5000&qid=1596427310&sr=8-2

3. OLED Display 0.96 Inch(SSD1306) I2C Module. Qty =1 
(https://www.amazon.in/Generic-0-96-Display-Module-Arduino/dp/B01GNZEM22/ref=sr_1_1?dchild=1&keywords=OLED+Display+0.96+Inch%28SSD1306%29&qid=1596427383&sr=8-1)
(https://www.amazon.com/Display-Module-SSD1306-Du-pont-Arduino/dp/B07VDXYDVY/ref=sr_1_2?crid=2GHT752R6KXR6&dchild=1&keywords=oled+ssd1306&qid=1596427429&sprefix=oled+ss%2Caps%2C364&sr=8-2)

4. NodeMCU ESP8266 Microcontroller. Qty = 1
(https://www.amazon.in/Generic-Nodemcu-Esp8266-Internet-Development/dp/B07262H53W/ref=sr_1_1?dchild=1&keywords=NodeMCU&qid=1596427453&sr=8-1)
(https://www.amazon.com/HiLetgo-Internet-Development-Wireless-Micropython/dp/B010O1G1ES/ref=sr_1_1_sspa?dchild=1&keywords=NodeMCU&qid=1596427459&sr=8-1-spons&spLa=ZW5jcnlwdGVkUXVhbGlmaWVyPUEyR0E0RFUzQTlQWElSJmVuY3J5cHRlZElkPUEwNzAxNjkzMTc3SlFTV1VITlRSNyZlbmNyeXB0ZWRBZElkPUEwNTYyNjkzMU5WTEI1SjdJUTlDJndpZGdldE5hbWU9c3BfYXRmJmFjdGlvbj1jbGlja1JlZGlyZWN0JmRvTm90TG9nQ2xpY2s9dHJ1ZQ&th=1)

5. Passive buzzer 3~5V 12mm. Qty = 1
(https://www.amazon.in/Passive-Acoustic-Component-Speaker-electronic/dp/B07MR2KN97/ref=sr_1_1?dchild=1&keywords=buzzer&qid=1596427505&sr=8-1)
(https://www.amazon.com/Cylewet-Electronic-Magnetic-Continuous-Arduino/dp/B01N7NHSY6/ref=sr_1_2?crid=2455CFN1OYFPH&dchild=1&keywords=buzzer+arduino&qid=1596427531&sprefix=buzzer+ard%2Caps%2C354&sr=8-2)

6. WS2811 Single NeoPixel LED 5V. Qty = 1
(https://www.amazon.com/ALITOVE-100pcs-WS2812B-Addressable-Arduino/dp/B01D1FFVOA/ref=sr_1_6?dchild=1&keywords=ws2812+single&qid=1596427616&sr=8-6)

7. M3 x 6mm. Qty = 10.
8. M2 x 4mm. Qty = 7.
9. Dupont Connecting Wires. (As needed)
10. 3D printed parts. (https://www.thingiverse.com/thing:4561276) 

**Sensors to NodeMcu Connections:**

![Sensors to NodeMcu Connections](https://github.com/ceaswaran/Smart-Contactless-Body-Temperature-Scanning-Station-ESP-Home-/blob/master/Connection%20chart.JPG)

![Image of Circuit Diagram](https://github.com/ceaswaran/Smart-Contactless-Body-Temperature-Scanning-Station-ESP-Home-/blob/master/Circuit.jpg)

**ESP Home Yaml Code:**
https://raw.githubusercontent.com/ceaswaran/Smart-Contactless-Body-Temperature-Scanning-Station-ESP-Home-/master/contactless_body_scanning.yml

**Custom Mlx90614 Code:** 
https://raw.githubusercontent.com/ceaswaran/Smart-Contactless-Body-Temperature-Scanning-Station-ESP-Home-/master/custom_mlx_sensor.h

*After Creating ESP Home Yaml with your Wifi Credentials copy custom_mlx_sensor.h code to ESP ome directory & run Compile generate .bin file from ESPHome*

# Quick Demo Video: 
[![Watch the video](http://img.youtube.com/vi/vJ4Sof3lulc/0.jpg)](http://www.youtube.com/watch?v=vJ4Sof3lulc)

*https://youtu.be/vJ4Sof3lulc*

**What Next Planned In Version 2.0**
* Add MAX30100 Pulse Oximeter Heart Rate Sensor Module.
* Add DFPlayer Mini MP3 Player Module with Speaker, so we can use this station indepententely with custome voice reply/Welcome Messages.
* Add Solar Panel & Charging unit, since it is mostly gonna be used in outdoor area.

