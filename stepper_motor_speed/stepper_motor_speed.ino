int rot_speed = 255;

void setup() {                
  pinMode(8, OUTPUT);     
  pinMode(9, OUTPUT);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
}

void loop() {
  digitalWrite(9, HIGH);
  delayMicroseconds(rot_speed);          
  digitalWrite(9, LOW); 
  delayMicroseconds(rot_speed);          
}
