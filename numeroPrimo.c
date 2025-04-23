#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int k=2;
    printf("inserisci un numero:\n");
    scanf("%d",&n);
    while(k<=sqrt(n)){
        if(n%k==0){
            printf("non è primo");    
        }
        k++;
    }
    printf("il numero è primo");

}