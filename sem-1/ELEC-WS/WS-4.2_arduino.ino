//Experiment 4

int val = 0;

void setup(){
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  digitalWrite(10, HIGH);
}

void loop(){
  val = digitalRead(2);
  Serial.println(val);
  delay(100);

  if(val==1){
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
  }
  else{
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
  }
}