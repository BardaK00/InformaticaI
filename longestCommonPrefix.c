#include <stdio.h>
#include <stdlib.h>

int contaoccorenze(int indice,int*l1,int*l2,int nl2){
    int count=0;
    for (size_t i = 0; i < nl2; i++)
    {
        if (l2[i]==l1[indice])
        {
            count++;
        }
        
    }
    return count;
}

int *valutaoccorrenze(int *l1, int*l2,int nl1,int nl2){
    int *finalarray=malloc(nl1*sizeof(int));
    int count=0;
    for (size_t i = 0; i < nl1; i++)
    {
        if (contaoccorenze(i,l1,l2,nl2)!= l1[i])
        {
            finalarray[count]=l1[i];
            count++;
        }
        
    }
    return finalarray;
    
}



