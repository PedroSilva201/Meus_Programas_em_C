/*Faça uma função que receba, por parâmetro, um valor inteiro e positivo e retorna o número de divisores desse valor.
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int numero, quantidadeDeDivisores;
    quantidadeDeDivisores = 0;
    printf("Numero: ");
    scanf("%d", &numero);
    for (int i = 1; i <= numero; ++i) {
    if (numero % i == 0) {
        quantidadeDeDivisores++; 
        }
    } 
    printf("%d possui %d divisores.",numero, quantidadeDeDivisores);
    return 0;
}
