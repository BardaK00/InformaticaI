#include <stdio.h>
int lenght(char *b);
int main(){
    char a[100];
    printf("inserisci una stringa:");
    gets(a);
    printf("la lunghezza della stringa è:%d\n",lenght(a));

}

int lenght(char *b){
    int temp=0;

    if(b[0]== '\0' ){
        return 0;
    }
    else{
        for (int i = 0;b[i]!='\0'; i++)
        {
           temp++; 
        }
        return temp;
    }
}