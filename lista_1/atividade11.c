/**Dado um número inteiro positivo n, calcular a soma dos n primeiros números naturais.       **/
#include <stdio.h>
int main(){
    int n,i,soma;
    printf("\n\tCalculando a soma dos n primeiros numeros naturais\n");
    printf("\nDigite o valor de n: ");
    scanf("%d",&n);
    soma = 0;
    i = 1;
    while(i<=n){
        soma = soma +i;
        i = i + 1;
    }
    printf("a soma dos %d primeiros numeros naturais e'%d\n",n,soma);
    return 0;
}

