#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    while(true){
        printf("inserisci un numero:");
        scanf("%d", &n);
        if (n==-1){
            printf("nessuno di questi numeri è divisibile per 3\n");
        }
        if (n%3==0){
            printf("esiste un divisore\n");
            return 0;
        }
} }