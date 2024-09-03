/**Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.       **/
#include <stdio.h>
int main(){
    int n, i, impar;
    printf("Digite o valor de n: ");
    scanf("%d",&n);
    i = 0;
    impar = 1;
    printf("Os %d primeiros numeros impares sao:\n",n);
    while(i<n){
        printf("%d\n",impar);
        impar = impar + 2;
        i = i + 1;
    }
    return 0;
}
