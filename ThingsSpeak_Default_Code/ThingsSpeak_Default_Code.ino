#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
WiFiClient client;
String thingSpeakAddress= "http://api.thingspeak.com/update?";
String writeAPIKey;
String tsfield1Name;
String request_string;
HTTPClient http;
void setup()
{
  Serial.begin(9600);
  WiFi.disconnect();
  delay(1000);
   WiFi.begin("My-Network","Password");
  while ((!(WiFi.status() == WL_CONNECTED))){
    delay(300);
    Serial.println("..");

  }
  Serial.println("Wifi Connected");

}
void loop()
{

    if (client.connect("api.thingspeak.com",80)) {
      request_string = thingSpeakAddress;
      request_string += "key=";
      request_string += "Things Speak Api Key";
      request_string += "&";
      request_string += "field1";
      request_string += "=";
      request_string += "";
      http.begin(request_string);
      http.GET();
      http.end();

    }
    if (client.connect("api.thingspeak.com",80)) {
      request_string = thingSpeakAddress;
      request_string += "key=";
      request_string += "Things Speak Api Key";
      request_string += "&";
      request_string += "field2";
      request_string += "=";
      request_string += "";
      http.begin(request_string);
      http.GET();
      http.end();

    }
    delay(1000);

}
