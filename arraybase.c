#include <stdio.h>
#define N 5

int main(){
    /*dichiarazione di un array con [n] elenti al suo interno
    int v[4];
    char nome [20];
    int s [4*2];*/

    //dichiarazione di un array con N elementi dichiarati nel define dal preprocessore
    int a[N];
    for (int i = 0; i < N; i++)
    {
       printf("digita l'elemento da inserire nella posizione %d:",i);
        scanf("%d",&a[i]);
    }
    printf("l'array è composta da:");
    for (int j = 0; j < N; j++)
    {
       printf("%d ",a[j]);
    }
    print("\n");
   
    
    }