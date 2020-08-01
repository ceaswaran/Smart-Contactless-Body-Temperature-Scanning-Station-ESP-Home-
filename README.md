# Smart Contactless Body Temperature Scanning Station.
# ESPhome

![Image of Product](https://github.com/ceaswaran/Smart-Contactless-Body-Temperature-Scanning-Station-ESP-Home-/blob/master/Body_Temp_Scanning%20station-004.jpg)

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
2. Obstacle sensor Module (TCRT5000). Qty = 1 
3. OLED Display 0.96 Inch(SSD1306) I2C Module. Qty =1 
4. NodeMCU ESP8266 Microcontroller. Qty = 1 
5. Passive buzzer 3~5V 12mm. Qty = 1 
6. WS2811 Single NeoPixel LED 5V. Qty = 1 
7. M3 x 6mm. Qty = 10.
8. M2 x 4mm. Qty = 7.
9. Dupont Connecting Wires. (As needed)
10. 3D printed parts (www.thingiverse.com) *To be Uploaded*

**Sensors to NodeMcu Connections:**

![Sensors to NodeMcu Connections](https://github.com/ceaswaran/Smart-Contactless-Body-Temperature-Scanning-Station-ESP-Home-/blob/master/Connection%20chart.JPG)

**ESP Home Yaml Code:**
https://raw.githubusercontent.com/ceaswaran/Smart-Contactless-Body-Temperature-Scanning-Station-ESP-Home-/master/contactless_body_scanning.yml

**Custom Mlx90614 Code:** 
https://raw.githubusercontent.com/ceaswaran/Smart-Contactless-Body-Temperature-Scanning-Station-ESP-Home-/master/custom_mlx_sensor.h

*After Creating ESP Home Yaml with your Wifi Credentials copy custom_mlx_sensor.h code to ESP ome directory & run Compile generate .bin file from ESPHome*

# Quick Demo :  https://youtu.be/vJ4Sof3lulc

**What Next Planned In Version 2.0**
* Add MAX30100 Pulse Oximeter Heart Rate Sensor Module.
* Add DFPlayer Mini MP3 Player Module with Speaker, so we can use this station indepententely with custome voice reply/Welcome Messages.
* Add Solar Panel & Charging unit, since it is mostly gonna be used in outdoor area.

