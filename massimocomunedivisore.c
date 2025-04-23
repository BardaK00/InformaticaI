#include <stdio.h>

int main(){
    int x,y;
    int counter = 1;
    int mcd = 0;
    printf("inserire il primo numero:");
    scanf("%d",&x);
    printf("inserire il secondo numero:");
    scanf("%d",&y);

    while (counter<=x && counter<=y){

        if (x%counter==0 && y%counter==0){

            if (counter>mcd){
            mcd=counter;
            }
        }
        counter++;
    }
    
    printf("%d\n",mcd);
}