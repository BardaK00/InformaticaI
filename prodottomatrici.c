#include <stdio.h>
int m1[3][3]={{3,1,0},{2,4,0},{1,1,1}};
int m2[3][3]={{1,2,3},{4,2,1},{0,0,1}};

int main(){
    

    int temp=0;
    int output[3][3];

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t k = 0; k < 3; k++)
        {
            for (size_t j = 0; j < 3; j++)
            {
                temp += m1[i][j] * m2[j][k];
            }
            output[i][k]=temp;
            temp=0;
        }
        
    }

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ",output[i][j]);
        }
        printf("\n");
    }
    
    
}