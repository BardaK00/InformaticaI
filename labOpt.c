#include <stdio.h>
#include <stdlib.h>


int casualNumber();
int main(){
    int n;
    int m;
    printf("inserisci le dimensioni del labirinto \nle dimensioni devono essere n x m:\n");
    scanf("%d %d",&n,&m);

    //creazione del labirinto n righe e m colonne
    for(int i = 0;i<n;i++){
        for(int j=0;j<m;j++){
            if (i==0 || i==n-1 || j==0 || j ==m-1)
            {
                printf("&");
            }else{
            
            printf("%c",casualNumber());
            }
        }
        printf("\n");
    }

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