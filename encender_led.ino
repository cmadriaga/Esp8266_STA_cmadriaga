#include <ESP8266WiFi.h>

#include "Config.h"
#include "Esp8266.hpp"

//#define pinLed D6
//
//WiFiServer server(80); //objeto de la clase WiFiServer
//int estado = 1;

void setup() {
  // Inicia Serial
  Serial.begin(115200);
  Serial.println("\n");
//
//  pinMode(pinLed,OUTPUT);

 ConnectWiFi_STA();
//  server.begin(); //begin() levantamos el servidor 
//  Serial.println(WiFi.localIP());
//  digitalWrite(pinLed, 1);
  
}

void loop() {
//  
//  WiFiClient client = server.available(); //objeto de la clase WiFiClient
//  // avalaible() detecta un cliente nuevo del objeto de la clase WifiServer
//  if(!client){
//    return;
//  }
//  
//  Serial.println("Nuevo cliente...");
//  while(!client.available()){ //espera a un cliente diponible
//    delay(1);
//  }
//
//  String peticion = client.readStringUntil('\r'); //lee la peticion del cliente
//  Serial.println(peticion);
//  client.flush(); //limpia la peticion del cliente
//
//  if(peticion.indexOf("LED=ON") != -1)
//  {
//    estado=0;
//  }
//  if(peticion.indexOf("LED=OFF") != -1)
//  {
//    estado=1;
//  }
//
//  digitalWrite(pinLed, estado);
//
//  client.println("HTTP/1.1 200 OK");
//  client.println("");
//  client.println("");
//  client.println("");
//  client.println(""); 
//
//    //INICIA LA PAGINA
//
//client.println("<!DOCTYPE html><html lang='en'><head><meta charset='UTF-8'>");
//client.println("<meta name='viewport' content='width=device-width, initial-scale=1.0'>");
//client.println("<title>Control de LED</title></head>");
//client.println("<body style='font-family: Century gothic; width: 800;'><center>");
//client.println("<div style='box-shadow: 0px 0px 20px 8px rgba(0,0,0,0.22); padding: 20px; width: 300px; display: inline-block; margin: 30px;'> ");
//client.println("<h1>LED 1</h1>");
//
//if(estado==0)
//  client.println("<h2>El led esta ENCENDIDO</h2>");
//else
//  client.println("<h2>El led esta APAGADO</h2>");
//        
//client.println("<button style='background-color:red;  color:white; border-radius: 10px; border-color: rgb(255, 0, 0);' ");
//client.println("type='button' onClick=location.href='/LED=OFF'><h2>Apagar</h2>");
//client.println("</button> <button style='background-color:blue; color:white; border-radius: 10px; border-color: rgb(25, 255, 4);' ");
//client.println("type='button' onClick=location.href='/LED=ON'><h2>Encender</h2>");
//client.println("</button><br />");
//client.println("<form><label><input name='prog_time' type='radio'value='8' /> 8 hs </label><br />");
//client.println("<label><input name='prog_time' type='radio' value='4' /> 4 hs </label><br /></form> <br />");
//client.println("<input type='checkbox' id='cbox3' value='Lunes' /><label for='cbox2'>Lunes</label>");
//client.println("<<title>Selecciona tus intereses: </title></head><br />");
//
//client.println("<form><input name='cbipeliculas' type='checkbox' />Películas <br />");
//client.println("<input name='cbilibros' type='checkbox' />Libros <br />");
//client.println("<input name='cbiinternet' type='checkbox' />Internet</form> <br />");
//
//client.println("</div></center></body></html>");
//
//
//    //FIN DE LA PAGINA
//
//  delay(10);
//  Serial.println("Peticion finalizada");
//  Serial.println("");  
}
