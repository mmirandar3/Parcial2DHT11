#include <SimpleDHT.h>
int pinDHT11 = 3;
SimpleDHT11 dht11;

void setup() {
Serial.begin(9600);
}
void loop() {
float temperature = 0;
float humidity = 0;
int err = SimpleDHTErrSuccess;
if ((err = dht11.read2(pinDHT11, &temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
Serial.print("Read DHT11 failed, err="); Serial.println(err);delay(2000);
return;
}

Serial.print((float)temperature);
Serial.print(",");
Serial.println((float)humidity);
delay(2500);
}
