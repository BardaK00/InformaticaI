#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char denominazione[20];
    char cognome[15];
    int iscritti;
}corso;

corso corsi[7]={{"analisi1", "foschi", 78},
{"geometria", "mazzanti", 90},
{"informatica", "gavanelli", 85},
{"fisica1", "frontera", 75},
{"fisica2", "zavattini", 67},
{"inglese", "rossi", 45},
{"analisi2", "paoli", 61}};


int mediacorsi(corso *corsi, int ncorsi){
    int media=0;
    for (size_t i = 0; i < ncorsi; i++)
    {
        media += corsi[i].iscritti;
    }
    return media/7;
}

void printCorsi(corso *corsi, int ncorsi,int mediscritti){
    for (size_t i = 0; i < ncorsi; i++)
    {
        if (corsi[i].iscritti >= mediscritti)
        {
            printf("denom:%s, cognome:%s\n",corsi[i].denominazione,corsi[i].cognome);
        }
        
    }
}

int main(){

    int media=mediacorsi(corsi,7);
    printf("la media degli iscritti da superare è:%d\n\n",media);
    printCorsi(corsi,7,media);
    return 0;
}