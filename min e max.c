#include <stdio.h>

int main(){
    //inizializzo le variabili
    int n;
    int max=0;
    int min=0;
    //richiede il primo valore di n e lo assegnsa al valore minimo
    printf("inserisci un numero:");
    scanf("%d", &n);

    if(n==-1){
            printf("%d , %d\n",min,max); 
            return 0;
        }
    min = n;

    //crea un ciclo che chiede tanti numeri fino a che n=-1 e confronta i valori di n con le variabili max e min
    while (n != -1){
        printf("inserisci un numero:");
        scanf("%d", &n);
        if(n==-1){
            printf("%d , %d\n",min,max); 
            return 0;
        }
        
        if (n > max){
            max = n;
        }
        if (n<min){
            min = n;
        }
        
    }

}