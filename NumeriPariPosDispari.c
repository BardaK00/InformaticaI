#include <stdio.h>

int main(void){
    int n;
    int counter = 1;
    int output = 0;

    while(n!=-1){
        if (n==-1)
        {
            break;
        }
        //prende in input una sequenza di numeri fino a che l'utente non inserisce -1
        printf("inserisci un numero:");
        scanf("%d",&n);
        //verifica prima che il numero inserito sia pari e dopo che il contatore delle posizioni sia dispari
        if (n%2==0 && counter%2!=0)
        {
            //aumenta di 1 il valore del nostro output e aumenta di 1 la posizione del counter
            output++;
            
        }
        counter++;

    } 
    printf("il numero di elementi è:%d\n",output);
}