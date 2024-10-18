//Practical 3

int LED_Pin = 9;
int duty_cycle_value = 1;

void setup(){
  pinMode(LED_Pin, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  while(duty_cycle_value < 255) {
    analogWrite(LED_Pin, duty_cycle_value);
    delay(100);
    Serial.println(duty_cycle_value);
    duty_cycle_value++;
  }
  
  // Once we reach 255, reset the value and continue
  duty_cycle_value = 1;
}
