
//RGB LED - random colors using push-button

//pin connections
int red = 11;
int green = 10;
int blue = 9;
int buttonPin = 7;

void setup(){
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buttonPin, INPUT);
}
void loop()
{
  //pick a random color
  if (digitalRead(buttonPin) == HIGH)
  {  //if button pressed
  analogWrite(red, random(256));
  analogWrite(blue, random(256));
  analogWrite(green, random(256));    
  
  delay(1000);                         //wait one second    
  
  analogWrite(red, LOW);
  analogWrite(green, LOW);
  analogWrite(blue, LOW);
  delay(100); 
  }
  
}
