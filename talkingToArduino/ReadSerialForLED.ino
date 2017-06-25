void setup() {
  pinMode(13, OUTPUT); // 13番ピンを出力に設定
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) { // 受信したデータが存在する
    int input = Serial.read(); // シリアル通信の読み込み
  
    switch(input) {
      case 'h':
        digitalWrite(13,HIGH); // 5V -> LEDをONにする
        break;

      case 'l':
        digitalWrite(13,LOW); // 0V -> LEDをOFFにする
        break;        
    }
  }
}

