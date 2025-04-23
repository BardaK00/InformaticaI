#include <stdio.h>
#include <stdlib.h>


int casualNumber();
int main(){
    int n;
    int m;
    printf("inserisci le dimensioni del labirinto \nle dimensioni devono essere n x m:\n");
    scanf("%d %d",&n,&m);

    // genera la prima riga di muri
        for (int k = 1; k <= m; k++)
        {
            printf("&");
        }
        printf("\n");
    //creazione del labirinto n righe e m colonne
    for(int i = 1;i<n;i++){
        //genera la prima colonna di muri
        printf("&");

        //genera l'interno del labirinto richiamando un valore dalla funzione CasualNumber
        for(int j=2;j<m;j++){
            printf("%c",casualNumber());
        }
        //genera l'ultima colonna di muri
        printf("&");
        printf("\n");
    }
    //genera l'ultima riga di muri
    for (int p = 1; p <= m; p++)
    {
        printf("&");
    }
    printf("\n");
}

int casualNumber(){
    char wall = '@';
    char patt = '&';
    int cas = 1 + (rand()%10);
    if (cas<=7){
        return patt;
    }else{
        return wall;
    }
}