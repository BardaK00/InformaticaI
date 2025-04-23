#include <stdio.h>
int main(){
    int n=1;
    const float soglia =0.00005;
    float y=0.0;
    //programma che fa la somma di 1+1/2+1/3+1/4+...+1/n finchè n non diventa una soglia limite molto piccola
    do
    {
        y=y+(1.0/n);
        n++;
    } while ((1.0/n)>soglia);
    printf("%f",y);
}