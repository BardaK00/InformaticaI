#include <stdio.h>

int main(){
    int x;
    int success=0;
    int cancel =0;

    do{
        printf("inserisci un valore:");
        success=scanf("%d",&x);
        if (success==0)
        {
        char choice;
        printf("il valore inserito non è valido.\n\nvuoi inserire un nuovo valore:\npremere y per YES\npremere n per NO\n");
        printf("\n");
        scanf("%c",&choice);
        while (getchar()!=10);
        scanf("%c",&choice);
        getchar();
        cancel = ((choice == 'n') || (choice == 'N'));
        
        }else {
            printf("il tipo del valore inserito è corretto!\n");
            return 0;
        }
        
        
       
        
    }while (success == 0);

    
}