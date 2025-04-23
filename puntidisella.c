#include <stdio.h>
int M[3][4]={{1,2,8,3},{2,4,5,6},{3,7,9,10}};

int trovaMin(int riga);
int verificaMax(int riga, int colonna);

int main(){
    int min;

    for (int i = 0; i < 3; i++)
    {       
            min = trovaMin(i);
            if (verificaMax(i,min)==0)
            {
                printf("punto di sella trovato in pos:  M[%d][%d]",i,min);
                return 0;
            }else{
                printf("non c'è nessun punto di sella");
                return 0;
            }
        
      

    }
    
}


int verificaMax(int colonna,int riga){

    for (int i = 0; i < 3; i++)
    {
        if (M[riga][colonna]<M[riga][colonna+1])
        {
            return 0;
        }else{
            return 1;
        }
        
    }
}

int trovaMin(int riga){
    int tempRiga=0;
    for (int i = 0; i < 4; i++)
    {
        if (M[riga][i]< M[riga][i+1])
        {
           tempRiga= i;
        }else{
            tempRiga= i+1;
        }
        return tempRiga;
    }
    
}
