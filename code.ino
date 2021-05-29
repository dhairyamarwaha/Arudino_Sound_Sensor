int sound_sensor = 2;
int LED = 4;
boolean LED_status = false;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LED, OUTPUT);
pinMode(sound_sensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensor_data = digitalRead(sound_sensor);
  if (sensor_data == 1) {
    if (LED_status == false) {
      LED_status = true;
      digitalWrite(LED, HIGH);
      Serial.println("LED ON");
      }

   else {
    LED_status = false;
    digitalWrite(LED, LOW);
    Serial.println("LED OFF");
    }
    }
  }
