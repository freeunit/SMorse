#include <SMorse.h>

SMorse ch(3,50,10000);
int incomingByte = 0;

void setup()
{
Serial.begin(9600);
}

void loop()
{
if(Serial.available() > 0) {
incomingByte = Serial.read();
ch.avail(incomingByte);
}
}