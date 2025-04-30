#include "OTATemplate.h"

const char* WIFI_SSID = "SSID";
const char* WIFI_PASS = "PASSWORD";

void setup() {
  Serial.begin(115200);
  setupOTA(WIFI_SSID, WIFI_PASS);

  pinMode(2, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH); 
  delay(1000);                     
  digitalWrite(2, LOW);  
  delay(1000); 

  handleOTA(); 
}
