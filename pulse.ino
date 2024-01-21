volatile int BPM;

volatile int Signal;

volatile int Pulse;

volatile int IBI; I

void setup()
{
    Serial.begin(115200);
    interruptSetup();
    pinMode(2, INPUT);
    pinMode(4, OUTPUT);
    pinMode(8, OUTPUT);
}
void loop()
{
    int a = digitalRead(2); //Serial.println(x);
    int before = BPM;
    if(a == 1)
    {
        delay(3000);
        int after = BPM;
        //Serial.print(before);
        //Serial.print(" //Serial.println(after); ");
        if(before == after)
        {
            digitalWrite(4, HIGH);
            delay(100);
            digitalWrite(4, LOW);
            delay(100);
        }
        else
        {
            digitalWrite(8, HIGH);
            delay(100);
            digitalWrite(8, LOW);
            delay(100);
        }
    }
    delay(1000);
}
