#include <ESP8266WiFi.h>

void setup()
{
  /* 9600bps 인 포트 */
  Serial.begin(9600);
  Serial.println();

  /* 와이파이 이름, 패스워드 입력 후 와이파이에 접속 */
  WiFi.begin("iptime-human401", "human401!");
  
  Serial.print("Connecting");
  /* 연결될때까지 대기 */
  while (WiFi.status() != WL_CONNECTED) 
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println();

  /* connected ip address : 아이피 주소 출력 */
  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());
  
}

void loop() {}
