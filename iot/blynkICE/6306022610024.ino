#define BLYNK_TEMPLATE_ID "TMPL2Q0S26zt"
#define BLYNK_DEVICE_NAME "control led on mobile phone Relay"
#define BLYNK_AUTH_TOKEN "YO2ASIJylMFdOBlIzYwCinLbV5A3hSs5"
#define BLYNK_PRINT Serial

#define ledred D1
#define ledwhite D2

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "iPhone";
char pass[] = "11111111";

BLYNK_WRITE(V5)
{
  if(param.asInt() == 1)
  {
    digitalWrite(ledred, HIGH);
  }
  else
  {
    digitalWrite(ledred, LOW);
  }
}

BLYNK_WRITE(V6)
{
  if(param.asInt() == 1)
  {
    digitalWrite(ledwhite, HIGH);
  }
  else
  {
    digitalWrite(ledwhite, LOW);
  }
}


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Blynk.begin(auth, ssid, pass);
  pinMode(ledred , OUTPUT);
  pinMode(ledwhite, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  Blynk.run();
}
