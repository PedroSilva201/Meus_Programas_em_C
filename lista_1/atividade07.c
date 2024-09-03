/** Calcular o fatorial de um número fornecido pelo usuário.
    A função fatorial de um número natural n é o produto de todos os n primeiros números naturais.
    Fat(n)=n!=1.2.3.4...n. Vamos tomar Fat (0)=1.**/

#include <stdio.h>
int main(){
    int n1 = 0, fat = 1, cont = 0;
    printf("Digite um numero: ");
    scanf("%d",&n1);
    if (n1 == 0)
    printf("o fatorial de %d é de %d", n1, fat);
    else{
        fat = n1;
        for(cont = n1; cont > 1; cont --){
            fat = (fat *(cont - 1));
        }
        printf("-----------------\n");
        printf("o fatorial de %d é de %d", n1, fat);
    }
    return 0;
}
