#include <stdio.h>

int square (int y);
int main(){
    int x;
    printf("il quadrato dei primi 10 numeri naturali è:\n");
    for (x=1;x<=10;x++){
        
        printf("%d\n",square(x));
    } 

}
int square(int y){
    return y*y;
}