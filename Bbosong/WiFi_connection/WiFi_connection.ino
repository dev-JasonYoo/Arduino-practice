#include <WiFi.h>

status = WL_IDLE_STATUS
char ssid[] = "SSID"
char pass[] = "PASSWORD"

void setup() {
  Serial.begin(9600)
  while (!Serial){
    ;
  }

  if (WiFi.status() == WL_NO_SHIELD) {
    Serial.println("WiFi shield not present");
    while (true);
  }

  Serial.print("Attempting to connect to WPA SSID: ");
  Serial.println(ssid);

    
  status = WiFi.begin(ssid, pass);

  delay(50000)
  
  while (status != WL_CONNECTED) {
    //print 'You entered wrong SSId or(and) password. Enter them again' Get new ones to attempt again

    
    status = WiFi.begin(ssid, pass);

    delay(50000)
    
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
