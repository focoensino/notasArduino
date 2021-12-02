#include "notas.h"

#define t4 2000
#define t2 1000
#define t1 500
#define t05 250
#define t025 125

#define pausa 125

int ritimo = 1;

int musica []={
NOTE_C7,NOTE_C7,
NOTE_D7,NOTE_C7,NOTE_F7,
NOTE_E7,NOTE_C7,NOTE_C7,
NOTE_D7,NOTE_C7,NOTE_G7,
NOTE_F7,NOTE_C7,NOTE_C7,
NOTE_D7,NOTE_A7,NOTE_F7,
NOTE_E7,NOTE_D7,NOTE_AS7,NOTE_AS7,
NOTE_A7,NOTE_F7,NOTE_G7,
NOTE_F7
  
};
int duracoes[]={
t05,t05,
t1,t1,t1,
t2,t05,t05,
t1,t1,t1,
t2,t05,t05,
t1,t1,t1,
t1,t1,t05,t05,
t1,t1,t1,
t2
  
};


void setup() {
pinMode(7,OUTPUT);

}

void loop() {

for(int nota = 0; nota< sizeof(musica)/sizeof(int); nota++){
  int duracaonota = duracoes[nota]/ritimo;
  tone(7,musica[nota],duracaonota);
  delay(duracaonota*1.3);
  noTone(7);
}

delay(5000);
}
