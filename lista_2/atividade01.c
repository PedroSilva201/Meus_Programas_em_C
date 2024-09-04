/*Escreva uma função que recebe um inteiro positivo n e devolve 1 se n é primo, 0 em caso contrário.
*/
#include <stdio.h>
#include <math.h>
int main(){
    int n, aux, primo = 1;
    printf("Numero: ");
    scanf("%d", &n);
    for (aux = 2; primo && (aux <= sqrt(n)); aux++)
    if((n % aux) == 0)
    primo = 0;
    if (primo)
    printf("%d é primo!", n);
    else	
    printf("%d nao é primo!", n);
    return 0;
}
