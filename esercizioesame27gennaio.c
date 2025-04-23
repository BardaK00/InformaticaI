#include <stdio.h>
#define N 50
int m1[N];
int m2[N*N];

int conta(int x,int c[N*N]){
    int counter=0;
    for (size_t i = 0; i < N * N; i++)
    {
        if (c[i]==x)
        {
            counter++;
        }
        
    }
    return counter;
}

int verifica_matrice(int a[N],int b[N*N]){
    for (size_t i = 0; i < N; i++)
    {
        if(conta(a[i],b)!=a[i]){
            return 0;
        }
            
        
    }
    return 1;
}