#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum stato{prestito,restituzione};

typedef struct{
    char *nome_cl;
    enum stato stato;
    int cod_libro;
}riga;

typedef struct{
    int cod_l;
    int scaffale;
    int n_copie;
}libro;

int contaOperazioni(riga *records);
void Clienti_Attivi(riga *records);
int contaLibri(libro *libreria);
void scaffale_occupato(libro *libreria);
int countForBook(riga *records);
int gestibili(libro *libreria,riga *records);

int main(){
    riga *records = malloc(10*sizeof(riga));
    records ->nome_cl = malloc(50*sizeof(char));
    libro *libreria = malloc(20*sizeof(libro));

    for (int i = 0; i < 10; i++) {
    free(records[i].nome_cl);
    }   
    free(records);
}

int contaOperazioni(riga *records){
    int x = 0;
    char *tempstring = malloc(50*sizeof(char));
    strcpy(tempstring ,records->nome_cl);

    for (size_t i = 0; i < 10; i++)
    {
        if (strcmp(records[i].nome_cl,tempstring)==0)
        {
            x++;

        }
    }
    free(tempstring);
    return x;
}
void Clienti_Attivi(riga *records){
    int tempop=contaOperazioni(&records[0]);
    int index=0;
    for (size_t i = 1; i < 10; i++)
    {
        int op=contaOperazioni(&records[i]);
        if (op>tempop)
        {
            tempop=op;
        }else{
             index = i;
        }
        
    }
    printf("il cliente più attivo è:%s",records[index].nome_cl);
    
}

int contaLibri(libro *libreria){
    int x = 0;

    for (size_t i = 0; i < 20; i++)
    {
        if (libreria[i].scaffale == libreria->scaffale)
        {
            x++;
        }
        
    }
    return x;
}

void scaffale_occupato(libro *libreria){
    int templib=contaLibri(&libreria[0]);
    int index=0;
    for (size_t i = 1; i < 20; i++)
    {
        int lib=contaLibri(&libreria[i]);
        if (lib>templib)
        {
            templib=lib;
        }else{
            int index = i;
        }
        
    }
    printf("lo scaffale contente più libri è il numero:%d",libreria[index].scaffale);
}

int countForBook(riga *records){
    int x = 0;

    for (size_t i = 0; i < 10; i++)
    {
        if (records[i].cod_libro == records->cod_libro)
        {
            x++;
        }
        
    }
    return x;
}
int gestibili(libro *libreria,riga *records){
    for (size_t i = 0; i < 20; i++)
    
    {
        int count = countForBook(&records[i]);
        if (libreria[i].n_copie > count)
        {
            return 1;
        }
        
    }
    return 0;
}