/*Escreva uma função que recebes 3 valores inteiros e positivos X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar qual o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor do que a soma do comprimento dos outros dois lados. O procedimento deve identificar o tipo de triângulo formado observando as seguintes definições:
⦁	o Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
⦁	o Triângulo Isósceles: os comprimentos de 2 lados são iguais.
⦁	o Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
*/
#include <stdio.h>
int main() {
    int lado1, lado2, lado3;

    printf("Digite 3 medidas dos lados: ");
    printf("\nprimeiro lado: ");
    scanf("%d",&lado1);
    printf("segundo lado: ");
    scanf("%d",&lado2);
    printf("terceiro lado: ");
    scanf("%d",&lado3);

    if(lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1){
        if(lado1 == lado2 && lado1 == lado3)
            printf("o triangulo e Equilatero!\n");
        else
            if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
                printf("o triangulo e Isosceles!\n");
            else
                printf("o triangulo e Escaleno!\n");
    }
    else
        return 0;
}
