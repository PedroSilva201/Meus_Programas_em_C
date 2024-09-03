/**Dada uma sequência de números inteiros não nulos, começando por um, imprimir seus quadrados.       **/
#include <stdio.h>
int main(){
    int numero;
    int quadrado;
    
    printf("\n\tCalculo dos quadrados de uma sequencia de numeros\n");
    printf("\nEntre com uma sequencia de numeros inteiros nao nulos, seguida por : ");
    scanf("%d",&numero);
   
    while(numero !=0){
        quadrado = numero * numero;
        printf("o quadrado do numero %d e'%d\n",numero, quadrado);
        scanf("%d",&numero);
        }
        return 0;
}
