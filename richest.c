#include <stdio.h>

int sumrow(int v[3][3],int rowsIndex){
    int sum=0;
    for (size_t i = 0; i < 3; i++)
    {
        sum+=v[rowsIndex][i];
    }
    return sum;
}

int richest(int v[3][3]){
    int richest=sumrow(v,0);
    for (size_t i = 1; i < 3; i++)
    {
       int temp = sumrow(v,i);
        if (temp > richest)
        {
            richest = temp;
        }
        
    }
    return richest;
}

int main(){
    int a[3][3]={
        {7,1,3},
        {2,8,7},
        {1,9,5}
    };

    printf("il più ricco ha:%d \n",richest(a));

}