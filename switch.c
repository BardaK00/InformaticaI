#include <stdio.h>
int main (void){
    char x;
    float a,area = 0,h;
    float l1,l2,l3,perimetro=0;
    
    printf("Cosa vuoi calcolare \na) area del triangolo\np)perimetro\ninserisci la lettera corrispondente");
    scanf("%c",&x);
    switch (x)
    {
    case 'a':
        printf("inserisci il valore della base:");
        scanf("%f",&a);
        printf("inserisci il valore dell'altezza :");
        scanf("%f",&h);

        area = (a*h)/2;
        printf("l'area del triangolo è:%1.2f\n",area);
        
        break;
    case 'A':
        printf("inserisci il valore della base:");
        scanf("%f",&a);
        printf("inserisci il valore dell'altezza :");
        scanf("%f",&h);

        area = (a*h)/2;
        printf("l'area del triangolo è:%1.2f\n",area);
        
        break;
    case 'p' :

        printf("inserisci il valore dei lati:");
        scanf("%f %f %f",&l1,&l2,&l3);
        perimetro = l1 +l2+l3;
        printf("il valore del perimetro è:%1.2f\n",perimetro);
        break;

    case 'P' :

        printf("inserisci il valore dei lati:");
        scanf("%f %f %f",&l1,&l2,&l3);
        perimetro = l1 +l2+l3;
        printf("il valore del perimetro è:%1.2f\n",perimetro);
        break;

    default:
        printf("la scelta non è disponibile nella lista!");
        break;
    }


    return 0;
}