#include <stdio.h>

int main(){
    //inizializza le variabili
    int n;
    int risultato = 1;
    int counter = 1;

    //stampa su schermo e chiede all'utente di inserire un numero intero e lo salva nella variabile n
    printf("inserire un numero intero:");
    scanf("%d",&n); 

    //calcola il fattoriale
    while(counter <= n){
        risultato = risultato * counter;
        counter ++;
    }       

    //stampa il fattoriale
    printf("il fattoriale di %d è:%d\n",n,risultato);
    return 0;


}