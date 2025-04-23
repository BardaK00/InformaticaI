#include <stdio.h>

int main(){
    int n[3][4]={{1,2,3,7},{4,5,6,8},{7,8,9,9}};
    int m[4][2]={{1,2},{5,8},{1,1},{2,1}};
    
    int p[4][4];
    int temp;
    for (int i = 0; i < 3; i++)
    {
        temp = 0;
        for (int j = 0; j < 4; j++)
        {
            temp += n[i][j]*m[j][i];
            
         
        }
        p[i][i] = temp;
    }

    
    
    




    //printare la matrice p
    for (int k = 0; k < 4; k++)
    {
        printf("\n");
        for (int f = 0; f < 4; f++)
        {
           printf("%d ",p[k][f]);
           
        }
        
    }
    
    
}