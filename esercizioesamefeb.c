#include <stdio.h>
#include <stdlib.h>

int m[3][3]={{2,7,5},{5,10,1},{8,3,14}};

int n[3][3]={{8,1,7},{14,5,2},{4,8,3}};

void estrai_lista(int a[][3],int b[][3]);
int trovato(int x , int matrix[][3]);

int listaf[4];

int main(){
    printf("l'array risultato è:");
    
    estrai_lista(m,n);
    for (size_t i = 0; i < 4; i++)
    {
       printf("%d ",listaf[i]);
    }
    
    
    
}

void estrai_lista(int a[][3],int b[][3]){
    int cont=0;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if((i+j)%2==0 && trovato(m[i][j],n)){
                listaf[cont]=m[i][j];
                cont ++;
            }
        }
        
    }
}

int trovato(int x , int matrix[][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(x == n[i][j]&&(i+j)%2!=0){
                return 1;
            }
        }
        
    }
    return 0;
}

