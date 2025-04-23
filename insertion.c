#include <stdio.h>

int main(){
    int a[9]={4,5,3,1,10,25,7,21,50};
   int pivot=a[0];
    
    
    for (size_t i = 1 ; i < 9; i++)
    {
        
        
        for (size_t j = i; j > 0; j--)
            {
                if (a[j]<a[j-1])
                {
                    int temp=a[j-1];
                    a[j-1]=a[j];
                    a[j]=temp;
                }
                
            
            
            }
        }
    
        
        
    
    
    

    for (size_t k = 0; k < 9; k++)
    {
        printf("%d ",a[k]);
    }
}
    
