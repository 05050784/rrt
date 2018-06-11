#define PinMotor1 6
#define PinMotor2 5
#define PinMotor3 10
#define PinMotor4 11
void setup() 
{
    pinMode(PinMotor1, OUTPUT);
    pinMode(PinMotor2, OUTPUT);
    pinMode(PinMotor3, OUTPUT);
    pinMode(PinMotor4, OUTPUT);
}
void loop()
{
    analogWrite(PinMotor1,120);
    analogWrite(PinMotor2,0);
    analogWrite(PinMotor3,120);
    analogWrite(PinMotor4,0);
    delay(2000);
}
