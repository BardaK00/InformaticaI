#include <stdio.h>

void selection(int *a,int dim){
    
}

int main(){
    int a[5]={1,10,3,5,2};
    
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {
           if (a[i]<a[j])
           {
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
           }
           
        }
        
        
    }

    for (size_t k = 0; k < 5; k++)
    {
        printf("%d ",a[k]);
    }

    
    
    
}