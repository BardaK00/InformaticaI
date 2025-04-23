#include <stdio.h>
#include <stdlib.h>
#define N 10

typedef struct{
    char nome[20];
    int codice;
    int gfatti;
    int gsubiti;
}squadra;

void printsquadra(squadra*squadre,int size,int cod);
void goalmaggiori(squadra*squadre,int size);

int main(){
    squadra *squadre=malloc(N * sizeof(squadra));
    if (squadre==NULL)
    {
       printf("errore nell'allocazione di memoria");
       return 1;
    }
    goalmaggiori(squadre,N);
    printf("\n");
    int codinput;
    printf("inserisci il codice di una squadra:");
    scanf("%d",&codinput);
    printf("\n");
    printsquadra(squadre,N,codinput);
}

void goalmaggiori(squadra*squadre,int size){
    for (size_t i = 0; i < size; i++)
    {
        if (squadre[i].gfatti>squadre[i].gsubiti)
        {
            printf("nome:%s , codice:%d",squadre[i].nome,squadre[i].codice);
        }
        
    }
    
}

void printsquadra(squadra*squadre,int size,int cod){
    for (size_t i = 0; i < size; i++)
    {
        if (squadre[i].codice == cod)
        {
            printf("la squadra è:%s\ngoal fatti:%d\ngoal subiti:%d",squadre[i].nome,squadre[i].gfatti,squadre[i].gsubiti);
        }
        
    }
    
}

