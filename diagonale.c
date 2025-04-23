#include <stdio.h>
int main(){
    int a[4][4]={{2,2,1,3},{2,1,1,3},{2,2,2,3},{1,1,1,1}};
    int s=0;
    for (int i = 0; i < 3; i++)
    {
        // IL 3 DEVE ESSERE SOSTITUITO CON N-1
        s += a[i][i]-a[i][3-i];
        

    }
    
    printf("%d\n", s);
    

}