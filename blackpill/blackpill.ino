/*
arduino-cli core update-index
arduino-cli core install STM32:stm32

wget https://www.st.com/content/ccc/resource/technical/software/utility/group0/32/27/b0/4a/01/e2/40/56/stm32cubeprg-lin_v2-6-0/files/stm32cubeprg-lin_v2-6-0.zip/jcr:content/translations/en.stm32cubeprg-lin_v2-6-0.zip
tar -xvf en.stm32cubeprg-lin_v2-6-0.zip
./en.stm32cubeprg-lin_v2-6-0/SetupSTM32CubeProgrammer-2.6.0.linux
sudo cp /home/lukic/STMicroelectronics/STM32Cube/STM32CubeProgrammer/Drivers/rules/* /etc/udev/rules.d
sudo udevadm control -R

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
