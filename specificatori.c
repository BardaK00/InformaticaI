#include <stdio.h>
int main(){
    int a =-567;
    int b=2;
    int c = 45000;
    int d= 33;
    float e =1.22E7;
    float f=0.1234567;
    float g=98765.4321;
    float h=1.0;

    printf("%2.2d %2.5d %2.3d %2.3d\n",a,b,c,d);

    printf("%2.3f %2.3f %2.3f %2.3f\n",e,f,g,h);

    return 0;
}