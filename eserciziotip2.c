#include <stdio.h>
#include <stdlib.h>
#define N 10
float contapari(int a[]);
float contadispari(int a[]);

int main(){
    int arr1[]={12,9,15,7,8,3,11,5,2,1};
    int arr2[]={3,4,2,7,8,6,15,25,10,17};
    
    float *dinArray=malloc(N * sizeof(int));
    
    
    int cont=0;
    
    for (int i = 0; i < (sizeof(arr2)/sizeof(int)); i++)
    {
        if(arr1[i]>=contapari(arr2) && arr1[i]<= contadispari(arr2)){
            dinArray[cont]=arr1[i];
            cont++;
        }
    }

    for (int j = 0; j<=(sizeof(dinArray)/sizeof(int)); j++)
    {
        printf("[%d]\n",dinArray[j]);
        if (dinArray==NULL)
    {
        printf("memory error");
        exit(1);
    }
    }

}

float contapari(int a[]){
    float x = 0;
    for (int i = 0; i < (sizeof(a)/sizeof(int)); i++)
    {
        if (a[i]%2==0)
        {
           x++;
        }
        
    }
    return x/2;
}

float contadispari(int a[]){
    return ( (sizeof(a) / sizeof(int) ) -contapari(a)) /2;
}

