
#include <Servo.h>
int movServos [4][90];
int botonPin=3;
int botonVal=1;


Servo garra, rotacion,altura, profundidad;

int mov[4][2]={
  {15,3},//altura
  {5,5},//profunsdidad
  {7,5},//garra
  {31,3}//rotacion
};

void setup() {

              rotacion.attach(13);
              altura.attach(11);
              garra.attach(10);
              profundidad.attach(12);
              Serial.begin(9600);
              pinMode (botonPin, INPUT_PULLUP) ;

              //Posicion inical
               rotacion.write(99);
               delay(50);
               profundidad.write(101);
               delay(50);
               altura.write(50);
               delay(50);
               garra.write(55);
              //rotacion.write(120);
              
             }
void loop ()
             {
              botonVal=digitalRead(botonPin);
             if(botonVal==0){

            
                 for(int i=0; i<mov[1][0];i++){
               profundidad.write(profundidad.read()-mov[1][1]);
               delay(40);
             }
             delay(500);
               for(int i=0; i<mov[0][0];i++){
               altura.write(altura.read()+mov[0][1]);
               delay(40);
             }
             delay(500);
             for(int i=0; i<mov[2][0]; i++){
               garra.write(garra.read()+mov[2][1]);
               delay(100);
             }
             delay(500);
              for(int i=0; i<mov[3][0]; i++){
               rotacion.write(rotacion.read()-mov[3][1]);
                delay(40);
             }
             for(int i=0; i<mov[2][0]; i++){
               garra.write(garra.read()-mov[2][1]);
               delay(100);
             }
              Serial.print(" garra ");
              Serial.print(garra.read());
              Serial.println(" ");
              delay(5000);
             //Posicion inical
               //Posicion inical
               rotacion.write(99);
               delay(50);
               profundidad.write(101);
               delay(50);
               altura.write(50);
               delay(50);
               garra.write(55);
             }
             }
            
