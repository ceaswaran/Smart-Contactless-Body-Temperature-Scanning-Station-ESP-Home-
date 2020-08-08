#include "esphome.h"
#include "Adafruit_MLX90614.h"
using namespace esphome;

#define irSnsr 14  // Assign GPIO 14 (D5) Pin of NodeMcu /ESP8266 to Obstacle sensor Module (TCRT5000).
#define buzzer 15  // Assign GPIO 15 (D8) Pin of NodeMcu /ESP8266 to Passive 3V buzzer.
// WS2811 LED (Just One Pixel) code removed from this code & added to ESPHome Yaml as ESPhome as Inbuilt FAST LED Library. This is to keep custom componet simple & Easy.
int check = 0;
int statusSensor = 0;

Adafruit_MLX90614 mlx = Adafruit_MLX90614();

class CustommlxSensor: public PollingComponent, public Sensor
{
	public: Sensor *mlxesphomeatc_sensor = new Sensor();
	Sensor *mlxesphomeatf_sensor = new Sensor();
	Sensor *mlxesphomeotc_sensor = new Sensor();
	Sensor *mlxesphomeotf_sensor = new Sensor();
//	Sensor *mlxmotion_sensor = new Sensor();
	CustommlxSensor(): PollingComponent(1000) {}

	void setup() override
	{
		// This will be called by App.setup()
		mlx.begin();
		pinMode(irSnsr, INPUT);
		check = 0;
		pinMode(buzzer, OUTPUT);// Set buzzer as an output
	}

	void update() override
	{
		// This will be called by App.loop()
		statusSensor = digitalRead(irSnsr);
		if (statusSensor == 0 && check == 0)
		{
			check = 1;
			float ATempc = (mlx.readAmbientTempC());
			mlxesphomeatc_sensor->publish_state(ATempc);

			float ATempf = (mlx.readAmbientTempF());
			mlxesphomeatf_sensor->publish_state(ATempf);

			float OTempc = (mlx.readObjectTempC());
			mlxesphomeotc_sensor->publish_state(OTempc);

			float OTempf = (mlx.readObjectTempF());
			mlxesphomeotf_sensor->publish_state(OTempf);

			tone(buzzer,1000, 1000); // Send 1KHz sound signal for 1 sec...
		}
		else if (statusSensor == 1)
		{
			check = 0;
		}
}
};
