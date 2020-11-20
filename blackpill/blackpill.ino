/*
arduino-cli core update-index
arduino-cli core install STM32:stm32

> press both the boot button and reset buttons, release the reset button, the release the boot button after a half-second
arduino-cli compile --upload -b STM32:stm32:GenF4:pnum=BLACKPILL_F401CC,upload_method=dfuMethod
*/

#define LED_PIN PC13

void setup()
{
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(115200);
}

void loop()
{
    digitalWrite(LED_PIN, HIGH);
    delay(1000);
    digitalWrite(LED_PIN, LOW);
    delay(1000);
    Serial.println("Ping");
}
