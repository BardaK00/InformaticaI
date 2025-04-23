#include <stdio.h>
#include <stdlib.h>
#define N 50

int *twosum(int*nums, int numSize,int target,int *returnSize);

int main(){
    int target;
    int *number=malloc(N * sizeof(int));
    printf("inserisci un numero nel'array:");
    scanf("%d",&number[0]);

    for (size_t i = 1; i < N; i++)
    {
        int temp;
        printf("inserisci un numero nel'array:");
        scanf("%d",&temp);
        if (temp==-1)
        {
            break;
        }
        number[i]=temp;
        
    }

    int nsize=N;
    int *returnarray = malloc(2 * sizeof(int));
    printf("inserire il numero target:");
    scanf("%d",&target);
    int *indices = twosum(number, nsize, target, returnarray);

    if (indices != NULL) {
        printf("Gli indici che stai cercando sono: %d %d\n", indices[0], indices[1]);
    } else {
        printf("Nessuna coppia trovata che somma al target\n");
    }

    free(number);
    free(returnarray);
}

int *twosum(int*nums, int numSize,int target,int *returnSize){
    for (size_t i = 0; i < numSize-1; i++)
    {
        for (size_t j = 0; j < numSize-1; j++)
        {
            if (nums[i]+nums[j]==target)
            {
               returnSize[0]=i;
               returnSize[1]=j;
               return returnSize;
            }
            
        }
        
    }
    
}