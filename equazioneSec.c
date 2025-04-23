#include <stdio.h>
#include <math.h>
int main(void){
    float a,b,c;
    float x1=0,x2=0;
    float delta=0;
    float absdelta =0;
    // chiede all'utente di inserire i coefficenti dei termini dell'equazione
    printf("inserire il coefficente di x^2:");
    scanf("%f",&a);
    printf("inserire il coefficente di x:");
    scanf("%f",&b);
    printf("inserire il termine noto:");
    scanf("%f",&c);

    //controlla se il coefficente della x^2 = 0 
    if (a==0)
    {
         //controlla se il coefficente della x = 0 
        if (b==0)
        {
             //controlla se il coefficente del termine noto = 0 
            if (c==0)
            {
                printf("l'equazione è inderterminata.\n");
                return 0;
            }else{
                printf("l'equazione è impossibile\n");
                return 0;
            }
            //nel caso in cui il coefficente delle x sia diverso da 0
        }else{
           //pone il termine noto dall'altra parte dell'uguale (-c) e lo stampa come unica soluzione
            c = -c/b;
            printf("l'equazione di primo grado ha come soluzione:%f\n",c);
            return 0;
        }
        
    }else{
        /*se il coefficente di x^2 è diverso da 0
        controlla che anche quello della x lo sia*/
        if (b==0)
        {
            //se il coefficente della x è uguale a 0 pone la radice del termine noto come soluzione
            c = sqrt(-c);
            printf("l'equazione ha come soluzione:+ o - %f\n",c);
            return 0;
        }
         //se sia b che c sono diversi da 0 esegue la risoluzione con la formula classica delle equazioni di 2 grado
        if (b!=0 && c!=0)
        {
            delta=(b*b)+(-4*a*c);
            // se il delta = 0 la soluzione sarà unica
            if (delta == 0){
                x1 = (-b + sqrt(delta))/2*a;
                printf("la soluzione unica è: %f",x1);
                return 0;
            }
            //se il delta < 0 le soluzioni sono appartenenti ai numeri complessi
            if (delta < 0)
            {
                absdelta= fabs(delta);
                x1 = (-b + sqrt(absdelta))/2*a;
                x2 = (-b - sqrt(absdelta))/2*a;
                printf(" le radici complesse sono x1:%f,x2:%f\n",x1,x2);
                return 0;

            }else{
                //se il delta>0 trova le 2 soluzioni distinte
                x1 = (-b + sqrt(delta))/2*a;
                x2 = (-b - sqrt(delta))/2*a;
                printf("x1:%f,x2:%f\n",x1,x2);
                return 0;
            }
            
           
            }
            
            
        }
        

    }
    
