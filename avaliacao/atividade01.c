/*1. (4,0) Resolva os itens a seguir:
A. (2,0) Escreva a função para calcular a distância entre dois pontos: float calculo_distancia (int x1, int x2, int y1, int y2); Utilizar a fórmula para o Cálculo da distância entre dois pontos: Funções:
Para calcular a raiz quadrada: srtq ( X)   e   Para calcular potência: pow(num, 2) 
B. (2,0) Escreva o programa principal (main) que leia x1, x2, y1 e y2 e faça a chamada função calculo_distancia, do item a, e imprima a distância.
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
int x1, y1, x2, y2;
float calculo_distancia;
    printf("informe a coodernada do ponto x1: ");
    scanf("%i", &x1);
    printf("informe a coodernada do ponto y1: ");
    scanf("%i", &y1);
    printf("informe a coodernada do ponto x2: ");
    scanf("%i", &x2);
    printf("informe a coodernada do ponto y2: ");
    scanf("%i", &y2);
    calculo_distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("a distancia dos pontos e: %f", calculo_distancia);
    return 0;
}
