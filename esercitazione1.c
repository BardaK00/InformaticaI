#include <stdio.h>
#include <stdlib.h>
#define lung_nome 50
#define N 100

typedef struct{
    char nome[lung_nome];
    int età;
    int *voti;
    int numeroVoti;
}studente;

int *studenti; 
studenti=calloc(N,sizeof(studente));

int *voto;
voto=calloc( N,sizeof(studente));


void addStudent(studente*);

int main(){
    studente a;
    addStudent(&a);
    
}

void addStudent(studente *){
    studente newStudent;
    if(studenti == NULL){
        realloc(studenti,(sizeof(studenti)*2));
    }
    char nome[lung_nome];
    printf("Inserire il nome del nuovo studente:");
    gets(newStudent.nome);

    printf("inserire l'età dello studente:");
    int eta;
    scanf("%d",&eta);
    newStudent.età=eta;


    newStudent.voti = NULL;
    newStudent.numeroVoti=0;
}