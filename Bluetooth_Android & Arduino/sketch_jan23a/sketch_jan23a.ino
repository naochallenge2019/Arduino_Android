/*
* Sketch per la comunicazione Bluetooth con Blueterm(Android)
*/
#include <SoftwareSerial.h>

// nota:  numeri di pin assegnati casualmente
const unsigned int RX  = 2
const unsigned int TX = 3;  


SoftwareSerial Bluetooth(RX, TX); //pin per la comunicazione seriale

// FUNZIONI
void Risposta(){

  delay(1000);
  while(Bluetooth.available()){
      Serial.write(Bluetooth.read());
    }
    Serial.write("\n");
    return;
}


// SETUP
void setup() {
  

  Serial.begin(9600);
  Bluetooth.begin(9600);
  Bluetooth.print("AT+VERSION");
  Risposta();

  Bluetooth.print("AT+NAME");
  Bluetooth.print("ard_droid"); //Scegliere un nome
  Risposta();

  Bluetooth.print("AT+PIN");
  Bluetooth.print("nao2019"); //Scegliere un pin
  Risposta();
}


// LOOP
void loop() {


    while(Serial.available()){

        char dato = Serial.read();

        switch(dato){
            case 1:
                //istruzioni
                break;
            case 2:
                //Istruzioni
                break;
            case 3:
                //instruzioni    
                break;
        }


    }  
  

}
