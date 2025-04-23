#include <stdio.h>
#define N 5
int main(){
    int a[]={3,1,2,10,1};

    int b[N];
    b[0]=a[0];

    for (size_t i = 1; i < N ; i++)
    {
        int sum=a[0];
        for (size_t j = i; j > 0; j--)
        {
            sum+=a[j];
        }
        b[i]=sum;
    }
    
    for (size_t i = 0; i < N; i++)
    {
        printf("%d ",b[i]);
    }
    
}