#include <stdio.h>

int main(){
    int a [9]={1,3,5,7,10,15,21,27,50};
    int inf = 0;
    int sup=8;
    int el=15;

    while(inf <= sup){
        int med = inf + (sup-inf)/2;
        if (a[med]==el)
        {
            printf("l'elemento si trova all'indice:%d",med);
            return 0;
        }
        else if (el>a[med])
        {
            inf = med -1;
        }
        else{
            sup = med+1;
        }
    }
    printf("l'elemento non si trova nell'array");
    return 0;
}