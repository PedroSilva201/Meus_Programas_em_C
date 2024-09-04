/*Faça uma função para calcular o fatorial de um número fornecido pelo usuário.
    A função fatorial de um número natural n é o produto de todos os n primeiros números naturais.
    Fat (n) =n!=1.2.3.4...n. Vamos tomar Fat (0)=1.
*/
#include <stdio.h>

int main()
{
    int fat, n;
    printf("Insira um numero para calcular o fatorial: ");
    scanf("%d", &n);

    for(fat = 1; n > 1; n = n - 1)
    fat = fat * n;

    printf("\nFatorial desse numero é %d",fat);
    return 0;
}
/*creditos da resposta deste exercicio: 
<https://masterdaweb.com/blog/calculando-fatorial-em-c/#:~:text=int%20fat%2C%20n%3B%20printf%28%22Insira%20um%20valor%20para%20o,n%3B%20printf%28%22nFatorial%20calculado%3A%20%25d%22%2C%20fat%29%3B%20return%200%3B%20%7D>*/
