#include <mega32.h>

void main(){
DDRA.0=0;
DDRC.0=1;

PORTA=1;
PORTC=0;

 while(1){
    PORTC=~PINA;             
    }
 }
