    #include <stdio.h>

    int main(){
        int n;
        printf("inserisci il numero da ridurre a 0:");
        scanf("%d",&n);
        int m=n;
        int cont=0;
        
        while (n!=0)
        {
            if (n%2==1)
            {
                n--;
                cont++;
            }
            else{
                n=n/2;
                cont++;
            }
        }
        
        printf("per ridurre %d a 0 ci son voluti ben %d passi!",m,cont);
    }