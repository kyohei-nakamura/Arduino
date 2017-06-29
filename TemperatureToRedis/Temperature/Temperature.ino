//
// 温度センサーの値をシリアルモニタに表示するプログラム
//

void setup() {
  Serial.begin(9600);           //シリアルモニタに表示する為の設定
}

void loop() {
  int sensorPin = A0;     //アナログ0番ピンを指定
  int sensorValue = 0;

  sensorValue = analogRead(sensorPin);    //アナログ0番ピンからの入力値を取得
  float temp  = modTemp(sensorValue);     //温度センサーからの入力値を変換
  Serial.println(temp);                   //結果をシリアルモニタに表示
  delay(1000);                             //1秒ウェイト
}

//アナログ入力値を摂氏度℃に変換
float modTemp(int analog_val){
  float v  = 5;     // 基準電圧値( V )
  float offset = 0.5; // オフセット電圧( v )
  float scale = 0.01; // 1℃上がると電圧が0.01V上がる
  float tempC = ((analog_val * (v / 1024)) - 0.5) / scale;  // 摂氏に換算
  return tempC;
}

