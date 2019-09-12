String str;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  if(Serial.available()>0)
  {
    str=Serial.readString();
    Serial.print(str);
  }
}
