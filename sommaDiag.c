#include <stdio.h>
int main(){
    int a[4][4]={{2,2,1,3},{2,1,1,3},{2,2,2,3},{1,1,1,1}};
    int s=0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 3-i;j<4; j++)
        {
            s+=a[i][j];
        }
        

    }
    
    printf("%d\n", s);
    

}