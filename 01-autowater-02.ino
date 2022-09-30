void setup() {
  pinMode(A0,INPUT); //設定A0腳位為輸入
  pinMode(7, OUTPUT); //設定D7腳位為輸出
}

void loop() {
  if(analogRead(A0) < /*數值*/){ //如果土壤濕度感測器感測到的濕度低於xx，就會
    digitalWrite(7, HIGH); //關閉抽水馬達
  } else { //否則
    digitalWrite(7, LOW); //開啟抽水馬達
  }
}
