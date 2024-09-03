/** Dado um número positivo n, imprimir seu quadrado.**/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int main(){
    float a;
    printf("Digite um numero inteiro natural: ");
    scanf("%f",&a);
    printf("o quadrado do numero informado e: %3.0f\n\n",pow(a,2));
    return 0;
}
