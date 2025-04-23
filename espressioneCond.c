#include <stdio.h>
int main(){
    int y=5;
    //controlla se y > 0 e gli assegna il primo valore dopo il ?
    int x = (y>0)?3:5;
    int z = 0;
    z = (y>0)?z+1:z-1;

    printf("%d %d %d",y,x,z);
}


