#include <stdio.h>
/*specificare il tipo di dato che la nostra funzione darà come output , il nome e i vari dati che servono
specificandone il tipo di dato, se non specificato si suppone sia un intero*/
float max(int x,int y,int z);

//nella funzione main vengono chiesti in input gli interi x,y,z che vengono poi passati alla funzione max
int main(){
    int x,y,z;
    printf("inserisci i 3 numeri:");
    scanf("%d %d %d",&x,&y,&z);

    /*come valore di %f viene utilizzato il nome della funzione 
    e tra parentesi le variabili ed avrà il valore dell'output della nostra funzione */
    printf("il maggiore dei tre è:%f\n",max(x,y,z));
}

/*si specifica il tipo di dato che verrà dato in output dalla funzione e le variabili specificandone il tipo
e all'interno si scrive il codice che deve terminare con un return in modo che la chiamata alla funzione 
nel codice main capisca che valore deve attribuire al %f in questo caso */

float max(int x,int y,int z){
    int max;
    max = x;
    if (y>max){
        max = y;
    }
    
    if (z>max){
        max =z;
    }
    return max;
    }

/*se i valori di output e di input sono compatibili vengono convertiti automaticamente come in questo caso
anche se la variabile max è inizializzata come intero viene convertita come float e poi stampata nel main*/
