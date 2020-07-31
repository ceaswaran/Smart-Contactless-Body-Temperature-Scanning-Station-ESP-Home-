#include "esphome.h"
#include "Adafruit_MLX90614.h"
using namespace esphome;

#define irSnsr 14
#define buzzer 15
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
		pinMode(buzzer, OUTPUT);	// Set buzzer - pin 15 as an output
	}

	void update() override
	{
		// This will be called by App.loop()
		statusSensor = digitalRead(irSnsr);
//		mlxmotion_sensor->publish_state(statusSensor);
		if (statusSensor == 0 && check == 0)
		{
			check = 1;
			digitalWrite(led, HIGH);	// Turn the LED on
			float ATempc = (mlx.readAmbientTempC());
			mlxesphomeatc_sensor->publish_state(ATempc);

			float ATempf = (mlx.readAmbientTempF());
			mlxesphomeatf_sensor->publish_state(ATempf);

			float OTempc = (mlx.readObjectTempC());
			mlxesphomeotc_sensor->publish_state(OTempc);

			float OTempf = (mlx.readObjectTempF());
			mlxesphomeotf_sensor->publish_state(OTempf);

			tone(buzzer,1000, 1000); // Send 1KHz sound signal for 1 sec...
//			count = 1;
		}
		else if (statusSensor == 1)
		{
			check = 0;
		}
}
};