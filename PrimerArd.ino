#include <WiFi.h>

//Red
const char* ssid = "Free Web"; 
//Reemplazar por el nombre de la red a conectarse 


const char* password = "00000000"; 
//Reemplazar por la contrasena

WiFiServer server(80); //el servidor web

const int Led1=18; //Pines de cada led
const int Led2=19;




void setup() {
//Inicializar el puerto serie 
//Inicializar el puerto serie
Serial.begin(115200);

  
  //configurar pines de salida
  //pinMode(Led1,OUTPUT);
  //pinMode(Led2,OUTPUT);

Serial.printf("Conectando a: %s\n ", ssid);
WiFi.begin(ssid,password);

//Intentar siempre conectarse a la red

while(WiFi.status()!= WL_CONNECTED){
  Serial.printf("Conectando");
  delay(2000);
}
Serial.printf("Conectado a %s\n", ssid);
Serial.print("Direccion IP del modulo: ");
  Serial.println(WiFi.localIP());

}

void loop() {
  // put your main code here, to run repeatedly:
//digitalWrite(23, HIGH);
//delay(300);
//digitalWrite(23, LOW);
//delay(300);
}

//Se verifica y luego se instala, loop se ejecuta indefinidamente.
