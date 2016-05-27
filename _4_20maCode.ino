int analogPin = 0;     // potentiometer wiper (middle terminal) connected to analog pin 3
                       // outside leads to ground and +5V
int val = 0;           // variable to store the value read
float Temp = 0;

void setup()
{
  Serial.begin(9600);          //  setup serial
}

void loop()
{
  val = analogRead(analogPin);    // read the input pin
  Temp = (float) ((((val+68)-4)/16*(1023-222) + 222)*.000911);
  Serial.println(Temp);             // debug value
  delay(500);
}
