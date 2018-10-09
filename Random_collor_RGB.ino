//RGB LED - random colors using push-button

//pin connections
int red = 11;
int green = 10;
int blue = 9;
int buttonPin = 7;

void setup(){
  pinMode(red, output);
  pinMode(blue, output);
  pinMode(green, output);
  pinMode(buttonPin, input);
}
void loop()
{
  //pick a random color
  if (digitalRead(buttonPin) == HIGH){  //if button pressed
  analogWrite(red, random(256));
  analogWrite(blue, random(256));
  analogWrite(green, random(256))
    
  delay(15000);                         //wait one second
    
  analogWrite(red, 0);
  analogWrite(blue, 0);
  analogWrite(green, 0);
} else 
    {
  }
}
