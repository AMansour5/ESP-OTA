#include "OTATemplate.h"

const char* WIFI_SSID = "SSID"; // Replace with your network SSID
const char* WIFI_PASS = "PASSWORD"; // Replace with your network password

void setup() {
  Serial.begin(115200);
  setupOTA(WIFI_SSID, WIFI_PASS);

  // Write your setup code here
}

void loop() {
  // Write your main code here

  handleOTA();  // Must be called repeatedly
}
