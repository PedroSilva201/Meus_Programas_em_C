/** ⦁Dado um número inteiro positivo n verificar se é par ou ímpar. Apresente uma mensagem na tela informando o número e o resultado. OBS:% utilizado para calcular o resto.
If ((N % 2==0)
.**/

#include <stdio.h>
int main(){
    int N;
    printf("Digite um numero: ");
    scanf("%d",&N);
    if(N%2 == 0)
    printf("%d e par\n",N);
    else
    printf("%d e impar\n",N);
    return 0;
}
