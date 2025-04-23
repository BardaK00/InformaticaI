#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

void reverse(char *s,size_t n);
int main(){
    char *string=malloc(21 * sizeof(char));
    printf("inserisci la stringa da invertire:\n");
    gets(string);
    size_t len =strlen(string);
    reverse(string,len);
}

void reverse(char *s,size_t n){
    char *reversed=malloc(21 * sizeof(char));
    for (size_t i =0; i <n; i++)
    {
        reversed[i]=s[n-1-i];
        
    }

    printf("la stringa inverita: %s\n",reversed);
}


