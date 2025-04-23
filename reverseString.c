#include <stdio.h>
char reverseString(char *);

int main(){
    char *s;
    printf("inserisci una stringa di max 20 caratteri: ");
    gets(s);

    reverseString(s);

    printf("%c",*s);
}

char reverseString(char *){
    char * c[20]={};
    char temp;
    int cont=0;
    char a[20]={};
    for (int i = 20; i > 0 ; i--)
    {
        temp = *c[i];
        a[cont] = temp;
        cont++;
    }
    return a;
}