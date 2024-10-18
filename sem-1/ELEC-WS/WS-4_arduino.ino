//Experiment 4

const int ledPin = 13;
const int ldrPin = A0;

void setup(){
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
}

void loop(){
  int ldrStatus = analogRead(ldrPin);

  if(ldrStatus <= 200){
    digitalWrite(ledPin, HIGH);
    Serial.print("Its Dark, Turn On the LED:");
    Serial.println(ldrStatus);
  }
  else{
    digitalWrite(ledPin, LOW);
    Serial.print("Its Bright, Turn off the LED:");
  }