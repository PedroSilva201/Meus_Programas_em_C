/** Calcular a tabuada de um número fornecido pelo usuário multiplicado de 0 a 12. O resultado deverá ser apresentado da seguinte maneira:  
Número x 0 = Resultado1.
Número x 1 = Resultado2.
                .
                .
                .
Número x 10 = Resultado n
**/

#include <stdio.h>
int main(){
    int i, j;
    printf("Entre com um valor: ");
    scanf("%d",&i);
    for(j = 0; j <= 10; j = j + 1)
    printf("%2d x %2d = %3d\n", j, i, i * j);
    printf("\n");
    return 0;
}
