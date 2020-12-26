/*
sudo usermod -a -G dialout $USER

arduino-cli core update-index
arduino-cli core install arduino:mbed

sudo bash -c 'cat > /etc/udev/rules.d/99-arduino-portenta.rules' << EOF
SUBSYSTEMS=="usb", ATTRS{idVendor}=="2341", ATTRS{idProduct}=="035b", GROUP="plugdev", MODE="0666"
EOF
sudo udevadm control -R

arduino-cli compile --upload --port /dev/ttyACM0 -b arduino:mbed:envie_m7
*/

void setup()
{
    pinMode(PIN_LED, OUTPUT);
    Serial.begin(115200);
}

void loop()
{
    digitalWrite(PIN_LED, HIGH);
    delay(1000);
    digitalWrite(PIN_LED, LOW);
    delay(1000);
    Serial.println("Ping");
}
