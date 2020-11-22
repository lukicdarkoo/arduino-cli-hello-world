/*
arduino-cli core update-index
arduino-cli core install arduino:samd

arduino-cli compile --upload --port /dev/ttyACM0 -b arduino:samd:arduino_zero_native
picocom -b 115200 /dev/ttyACM0

> If the board is not recognized as a tty device then double click the reset button to load active the bootloader.
*/

void setup()
{
    SerialUSB.begin(115200);
}

void loop()
{
    delay(1000);
    SerialUSB.println("Ping");
}
