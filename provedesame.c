#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int voto;
    char *nome;
}esame;


void inputesame(esame *);
int returnvoto(esame*,char*);
int main(){
    int n;
    printf("inserisci il numero di voti da inserire (max 30):");
    scanf("%d",&n);

    
    esame *esami = malloc(n*sizeof(esame));
    if (esami==NULL)
    {
        printf("memory error...Aborting");
        exit(1);
    }

    for (size_t i = 0; i < n; i++)
    {
        inputesame(esami);
    }
    printf("inserisci il nome dell'esame di cui vuopi vedere il voto:");
    char *nomeinput;
    gets(nomeinput);
    printf("il voto di %s è:%d",nomeinput,returnvoto(esami,nomeinput));
    

    
}

void inputesame(esame *esami){
    printf("inserisci il nome dell'esame:");
    char *nome;
    gets(nome);
    strcpy(esami->nome,nome);
    printf("inserisci il voto:");
    scanf("%d",esami->voto);
}

int returnvoto(esame *esami,char*s){
    if (strcmp(esami->nome,s)==0)
    {
        return esami->voto;
    }else{
        printf("l'esame non è stato trovato");
        return 0;
    }
    

}