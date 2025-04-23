#include <stdio.h>

int main(){
    int a[9]={4,5,3,1,10,25,7,21,50};
    for (size_t i = 0; i < 9; i++)
    {
        int temp;
        for (size_t j = 0; j < 9-i; j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
                
        }
        

    }

    for (size_t k = 0; k < 9; k++)
    {
        printf("%d ",a[k]);
    }
    
    
}