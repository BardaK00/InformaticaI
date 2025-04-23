#include <stdio.h>

int main(void){
    int n;
    int sottoseq=0;
    int counter = 0;
    do
    {
         printf("inserisci un numero:");
        scanf("%d",&n);
        if (n%2==0){
            counter++;
        }else{
            if (counter>sottoseq)
            {
                sottoseq = counter;
                counter = 0;
            }
            
        }
    } while (n!=-1);
    
    
    printf("%d\n",sottoseq);
}