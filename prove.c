#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5

//supponendo di avere delle struct in questo modo 
typedef struct{
    char nome[20];
    int n_dip;
    int anno;
}società;

typedef struct{
    int codice;
    società società[N];
}complesso;

int sommaricevuta(int m[N][N],int cod){
    int ricevute=0;
    for (size_t i = 0; i < N; i++)
    {
        ricevute += m[i][cod];
    }
    return ricevute;
}
int sommatrasferita(int m[N][N],int cod){
    int trasf=0;
    for (size_t i = 0; i < N; i++)
    {
        trasf+=m[cod][i];
    }
    return trasf;
}

int flussonetto(int m[N][N],int index){
    return sommaricevuta(m,index)-sommatrasferita(m,index);
}

int conta_occ(complesso *c,char nome[20]){
    int cont=0;
    for (size_t i = 0; i < N; i++)
    {
        if (strcmp(c->società[i].nome, nome)==0)
        {
            cont++;
        }
        
    }
    return cont;
}

int *conta_aziende(complesso *c,char nome[20]){
    int *indexaz = malloc(conta_occ(c,nome)*sizeof(int));
    int cont=0;
    for (size_t i = 0; i < N; i++)
    {
         if (strcmp(c->società[i].nome, nome)==0)
        {
            indexaz[cont]=i;
            cont++;
        }
    }
    return indexaz;
    free(indexaz);
}

int *flussi_per_dipendente(char nome[20],complesso *c,int m[N][N]){
    int *indici=conta_aziende(c,nome);
    int *flussi_per_dipendente=malloc(conta_occ(c,nome)*sizeof(int));
    for (size_t i = 0; i < conta_occ(c,nome); i++)
    {
        flussi_per_dipendente[i]=flussonetto(m,indici[i])/c->società[indici[i]].n_dip;
    }
    return flussi_per_dipendente;
}


int main(){
    complesso *c;
    int m[N][N];
    for (size_t i = 0; i < N; i++)
    {
        m[i][i]=0;
    }
    
}

