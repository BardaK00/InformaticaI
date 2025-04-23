#include <stdio.h>
double pow(double b,double k);

int main(){
    double b;
    int k;
    printf("inserisci il valore della base:");
    scanf("%lf",&b);
    printf("\n");
    printf("inserisci il valore del'esponente:");
    scanf("%d",&k);

    printf("la potenza %d di %1.0lf è:%1.2lf\n",k,b,pow(b,k));
}

double pow(double b,double k){
    if(k==0){
        return 1;
    }else{
    double buff = 1;
    double sum = 1;
    while (buff<=k){
        sum *= b;
        buff ++;

    }
    return sum;}
    


}