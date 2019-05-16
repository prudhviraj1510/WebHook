int led = D6;

int photosensor = A0;

int analogvalue = 0;

void setup()
{
    Serial.begin();
}
void loop()
{
    analogvalue = analogRead(photosensor);
    Particle.publish("light", String(analogvalue), PRIVATE);
    delay(3000);
}