#include <stdio.h>

int main(void){
    //input 5 valori e calcolarne la media
    int n;
    int somma=0;

    //calcola la somma dei 5 valori presi in input
    for (int i=1;i<=5;i++){
        printf("inserisci un numero:");
        scanf("%d",&n);
        somma=somma+n;

    }
    printf("la media è %f\n", (float)somma/5);
    
}