#include <stdio.h>
int a [10];
int med(int a[10]);

int main(){
    printf("inserire la temperatura n.1:");
    scanf("%d",&a[0]);
    for(int i=1;i<10;i++){
        if (a[0]==-1)
        {
            printf("il programma è stato interrotto\nnessun valore è stato inserito.\n");
            return 0;
        }
        
        if(a[i-1]==-1){
            printf("la media è:%d",med(a));
            return 0;
        }else{
            printf("inserire la temperatura n.%d:",i+1);
            scanf("%d",&a[i]);

            }
        
    }
    }

int med(int a[10]){
    int sum=0;
    for(int j=0;j<10;j++){
        sum += a[j];
        if (a[j]==-1){
            sum=sum/(j-1);
            break;
        }else{
            continue;
        }

    }


    return sum;
}