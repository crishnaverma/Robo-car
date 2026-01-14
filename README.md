It has a code of robo using L298N Motor Driver 

Hardware Connection Details

✅ Components Used

Arduino UNO

L293D Motor Driver Shield (HW-130)

HC-05 Bluetooth Module

IR Obstacle Sensor

Buzzer

4 × DC Motors

External Battery Pack

✅ Motor Connections (via L293D Shield)
Motor	Port	Position
M1	Motor 1	Front Left
M2	Motor 2	Front Right
M3	Motor 3	Rear Left
M4	Motor 4	Rear Right
✅ Sensor & Buzzer Pin Connections
Component	Arduino Pin	Purpose
IR Sensor OUT	D9	Obstacle detection
Buzzer +	D10	Sound alert
Buzzer –	GND	Ground
IR Sensor VCC	5V	Power
IR Sensor GND	GND	Ground
✅ Bluetooth (HC-05) Connections
HC-05 Pin	Arduino
VCC	5V
GND	GND
TXD	RX (D0)
RXD	TX (D1)

⚠️ Note: Disconnect Bluetooth while uploading code to Arduino.(important steps)

✅ Power Supply

Motors powered through Motor Shield external battery 
