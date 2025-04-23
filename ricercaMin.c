#include <stdio.h>
int recursiveInsertion();
int main(){
    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    
    int array[100]=recursiveInsertion();
    int min;

    for(int i=0;i<12;i++){
        if (array[i]<=min)
        {
            min = array[i];
        }
    }
    printf("il valore più piccolo è:%d\n",min);

}
int recursiveInsertion(){
    int x;
    int count=0;
    while(x!=-1){
        printf("inserisci il valore all'indice %d:",count);
        scanf("%d",&x);
        
        if (x==-1)
        {
            break;
        }
        count++;
        return x;
        return count;
        

    }
}