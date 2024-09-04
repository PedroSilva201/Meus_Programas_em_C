/*Dados um inteiro x e um inteiro não negativo n, calcular x n.*/
#include <stdio.h>
int main(){
    int x, n, potencia, contador;
    printf("\n\tCalculo das potencias\n");
    printf("\nDigite um numero inteiro: ");
    scanf("%d",&x);
    printf("Digite um numero inteiro nao-negativo: ");
    scanf("%d",&n);
    
    potencia = 1;
    contador = 0;
    
    while(contador !=n){
        potencia = potencia * x;
        contador =  contador + 1;
    }
    printf("\nO valor de %d elevado a %d: %d\n", x, n, potencia);
    return 0;
}
