
void setup() {
 
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(8, HIGH);   //Lediyaktık
  delay(1000);             //1 saniye
  digitalWrite(8, LOW);    //Ledi söndürdük
  delay(1000);            //1 saniye
}
