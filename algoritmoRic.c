#include<stdio.h>


int main(){
    int a[10]={1,2,3,4,100,6,7,8,9,10};
    int el = 100;
    int index = 0;

    for (int i=0;i<10;i++){
        if(a[i] == el){
            index = i;
            break;
    }else{
        index = -1;
        }
    }
    
    if (index!=-1){
        printf("l'elemento si trova nella pos:%d\n",index);
    }else{
        printf("%d",index);
        }
}