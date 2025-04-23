#include <stdio.h>
int main(){
    int a[4][4]={{2,2,1,3},{2,1,1,3},{2,2,2,3},{1,1,1,1}};
    int sum=0;

    // riga 1 e riga n-1-1
    for (int i = 1; i < 3; i++)
    {
        
        for (int j =0;j<(j-i)+i; j++)
        {
            sum+=a[i][j];

        }
        
    }
    printf("%d",sum);
}