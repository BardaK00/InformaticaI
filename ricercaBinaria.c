#include <stdio.h>
int main(){
    int a[11]={1,3,6,9,12,15,35,54,76,87,110};
    int inf = 0;
    int sup = 10;
    int el = 100;
    int med;
    while(inf<=sup){
        med=(inf+sup)/2;

        if(a[med]==el){
            printf("il valore di trova all'indice:%d\n",med);
            return 0;
        }
        else if(a[med]<el){
            inf=med+1;
            
        }
        else{
            sup=med-1;

        }
        
    }
    printf("il valore inserito non si trova nel vettore\n");
    
    
    
}