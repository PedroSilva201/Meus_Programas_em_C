/*12 Leia um vetor de 10 posições e elimine as posições com valor zero avançando uma posição, com os
valores subsequentes do vetor. Dessa forma todos “zeros” devem ficar para as posições finais do vetor.*/
#include <stdio.h>
int main(){
    int i, j, vetor[10], quantzero=0;
    for(i=0;i<10;i++)
        scanf("%d", &vetor[i]);
    
    for(i=0;i<10;i++){
        if(vetor[i]==0){
            j=i;
            quantzero++;
            while(j<10)
            {
                vetor[j]=vetor[j+1];
                if(vetor[j+1]==0)i--;
                j++;
            }
        }
    }
    i=0;
    j=9;
    if(quantzero>0)
    {
        while(i<quantzero)
        {
            vetor[j]=0;
            j--;
            i++;
        }
    }
    for (i=0;i<10;i++)
    printf("%d", vetor[i]);
    return 0;
}
