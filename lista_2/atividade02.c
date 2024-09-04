/*Escreva uma função que leia um inteiro não-negativo n e imprima a soma dos n primeiros números primos.
*/
#include <stdio.h>
int testaPrimo (int a) {
    int i, total=0;
    for (i=1;i<=a;i++) {
        if (a%i==0) {
            total++;
        }
    }
    if (total==2) 
        return 1;
    else
        return 0;
}
int main() {
    int valor=2, quantidade, soma=0, cont=0;
    printf("Numero: ");
    scanf("%d",&quantidade);
    
    while (cont<quantidade) {
        if (testaPrimo(valor)) { 
         if (cont < quantidade-1)                               
            printf ("%d + ",valor);
            else printf ("%d",valor);    
            soma=soma+valor;
            cont++;
        }
        valor++;
    }    
    printf(" = %d", soma);
    return 0;
}

