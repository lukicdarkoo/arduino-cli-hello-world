/*
arduino-cli core update-index
arduino-cli core install esp8266:esp8266

arduino-cli compile --upload --fqbn esp8266:esp8266:nodemcu --port /dev/ttyUSB0 
*/

#define LED_BUILTIN 2


void setup()
{
    pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
}
