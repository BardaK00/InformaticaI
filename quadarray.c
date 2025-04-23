#include <stdio.h>

int main(){
    int a[8];
    //printa a schermo i quadrati degli indici degli array
    for(int i=0;i<8;i++){
        a[i]=i*i;
        printf("%d ",a[i]);
    }
    
}