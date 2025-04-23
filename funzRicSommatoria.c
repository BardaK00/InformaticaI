#include <stdio.h>
float calc(float x);

int main(){
    float x;
    printf("somma fino a:");
    scanf("%f",&x);
    printf("\n");
    printf("il valore della sommatoria i=0 ad n di 1/i è:%f\n",calc(x));
}

float calc(float x){
    if(x==1){
        return 1;
    }else{
    float buff = 1;
    float sum = 0;
    while (buff<=x){
        sum += 1.0/buff;
        buff ++;
    }
    return sum;}
    


}