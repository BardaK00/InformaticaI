#include <stdio.h>
int calc(int x);

int main(){
    int x;
    printf("somma fino a:");
    scanf("%d",&x);
    printf("\n");
    printf("il valore della somma dei primi %d numeri naturali è:%d\n",x,calc(x));
}

int calc(int x){
    if(x==1){
        return 1;
    }else{
    int buff = 0;
    int sum = 0;
    while (buff<=x){
        sum += buff;
        buff ++;
    }
    return sum;}
    


}