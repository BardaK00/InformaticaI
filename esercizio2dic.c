#include <stdio.h>
#include <stdlib.h>
#define n 5
int verificaminimi(int m[n][n]);
int main(){

    int mat[n][n]={{1,2,3,4,5},{3,7,2,9,25},{4,8,15,7,7},{7,3,5,21,18},{9,12,8,6,29}};

    printf("%d",verificaminimi(mat));
}

int verificaminimi(int m[n][n]){
    int *array=malloc(n*sizeof(int));
    int cont=0;
    
    for(int col=0;col<n;col++){
        int minimo=m[0][col];
        for (int riga = 0; riga < n-1; riga++)
        {
            if(m[riga][col]< minimo){
                minimo=m[riga][col];

            }else{
                minimo=m[riga][col+1];
                  
            }

        }
        array[cont]=minimo;
        cont++;
    }

    for (int k = 0; k < n-1; k++)
        {
            if (array[k]<=array[k+1])
            {
                return 0;
            }
            return 1;
            
        }

}