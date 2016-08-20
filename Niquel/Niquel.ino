#include <SoftwareSerial.h>
#define IN1 2 // Ativador motor esquerdo - 
#define IN2 3 // Ativador motor esquerdo - 
#define IN3 4 // Ativador motor direito - 
#define IN4 7 // Ativador motor direito - 
#define ENA 5 // ENA esteira esquerda - 
#define ENB 6 // ENB esteira direita - 

#define PINBTX 12 // bluetooth
#define PINBRX 8 // Pin bluetooth

SoftwareSerial serial1(PINBRX, PINBTX);

int powerControl = 0;

void setup() {

  iniciarPinos();

}

void loop() {

  if (serial1.available()) {
    controleMotor(255, serial1.read());
  }

}
