#include <stdio.h>

int main(){
    //inizializzo le variabili
    int n1; //numero da verificare
    int n=0; // numero precedente
    int n2=0; // numero successivo
    int counter=0;

    printf("inserisci un numero:");
    scanf("%d", &n1);

    if(n1==-1){
            return 0;
        }
    n=n1;// il precendente diventa il numero assegnato

    printf("inserisci un numero:");
    scanf("%d", &n1);

    if(n1==-1){
            return 0;
        }
    printf("inserisci un numero:");
    scanf("%d", &n1);
    n2=n1;// il successivo diventa il numero assegnato

    if(n1==-1){
            return 0;
        }
    printf("inserisci un numero:");
    scanf("%d", &n1);

    //crea un ciclo che chiede tanti numeri fino a che n=-1 e sposta il valore di n1 in n , quello di n2 in n1 e il nuovo valore diventa n2
    while (n1 != -1){
        n=n1;
        n1=n2;
        printf("inserisci un numero:");
        scanf("%d", &n1);
        if(n1==-1){
            printf("il numero di punti è %d\n",counter);
            return 0;
        }
        n2=n1;

        if(n>n1&&n2>n1){
            counter++;
            
        }
        if(n<n1&&n2<n1){
            counter++;
            
        }
        
        
    }

}