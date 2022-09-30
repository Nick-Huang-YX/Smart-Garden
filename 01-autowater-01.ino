void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT); 
}

void loop() {
  Serial.println(analogRead(A0)); //列出目前土壤濕度目前的濕度
  delay(500); //延遲0.5秒
}
