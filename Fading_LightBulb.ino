//Fading of a light bulb using pulse width modulation
int fade; //variable to implement PWM 
int led=11;//led pin
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT); //declaring led as output
}

void loop() {
  // put your main code here, to run repeatedly:
 for (fade=0;fade <= 255; fade ++)
 {
     analogWrite(led,fade);
  delay(10);
 }
 for (fade =255; fade >=0; fade--){
  analogWrite(led,fade);
  delay(10);
 }
}
