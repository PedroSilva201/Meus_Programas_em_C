/*Inicialize um vetor de 10 posições e em seguida leia um valor X qualquer. Seu programa devera fazer
uma busca do valor de X no vetor lido e informar a posição em que foi encontrado ou se não foi
encontrado.
Exemplo: int vetor[10] = {2,5,4,54,43,22,5,9,30,15};*/
#include <stdio.h>
int main(){
    int i, m, v[20], c=0;
    for (i=0;i<20;i++)
    {	
        printf("Digite o valor da posiçao %i:", i);
        scanf("%i", &v[i]);
    }
    printf("Digite um numero para encontar no vetor: ");
    scanf("%i", &m);
      for (i=0;i<20;i++)
    {
        if(m==v[i]){printf("\nO numero foi encontrado na posiçao [%i] do vetor", i);}
    else{c=c+1;}
    }
    if(c==20){printf("\nO numero nao foi encontrado em nenhuma posiçao dos vetores");} else{}
   printf("\n\n");
  return 0;
}
