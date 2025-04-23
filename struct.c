#include <stdio.h>
//dichiarazione database
typedef struct{
        int età;
        char nome[40];
        long int matricola;
    }studente;

    typedef struct{
        char nome[20];
        int codesame;
        long int matricolaSuperato;
        int sessione;
        int anno;
        int voto;
    }esame;
    studente studenti[]={
        {19,"Manuel Caligiuri",123456},
        {21,"Massimo Bossetti",327937},
        {18,"Benito Ilduce",987654},
        {19,"Anna Frank",111111}};

    esame esami[]={
    {"analisi",1,111111,1,2024,30},
    {"analisi",1,123456,1,2024,23},
    {"analisi",1,327937,1,2024,25},
    {"analisi",1,987654,1,2024,19},

    {"informatica",2,111111,2,2024,18},
    {"informatica",2,123456,2,2024,28},
    {"informatica",2,987654,2,2024,15},
    {"informatica",2,327937,2,2024,29},
        
    {"algebra",3,111111,1,2025,15},
    {"algebra",3,123456,2,2025,27},
    {"algebra",3,987654,2,2025,30},
    {"algebra",3,327937,2,2025,18}
    };

    void esamesuperato();
    void mediavoti();
    void mediaesame();
    void studentimigliori();

    int main(){
    int scelta;
    printf("Sistema di gestione dabatabe università\n\n");
    printf("scegliere cosa si vuole fare:\n1.Visualizzare chi ha passato un esame\n2.Media dei voti degli studenti\n3.Media di voti più alta dei voti dell'esame in un anno\n4.Elenco dei migliori 3 studenti di un'anno\n\ninserisci la tua scelta:");
    scanf("%d",&scelta);
    switch (scelta)
    {
    case 1:
        
        break;
    case 2:
        mediavoti();
        break;
    case 3:
        break;

    case 4:
        break;

    default:
        break;
    }
}



void mediavoti(){
    char *a[40];
    int media =0;
    int matricola;
    
    printf("Inserisci il nome completo dello studente di cui visualizzare la media voti:");
    gets(a);
    studente *nPtr;
    nPtr->nome[*a[40]]+40;

     for (int i = 0; i < 3; i++)
    {
        media+=esami[(long int)nPtr+3].voto;
        
    }
    media=media/3;
    printf("la media di %s è:%d",a,media);

}

