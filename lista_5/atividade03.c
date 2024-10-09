/*3.Faça uma função que leia uma string de 50 posições digitada por um usuário, e retorne valor 1 se for um palíndromo ou 0 em caso negativo. Um palíndromo é uma palavra, frase ou qualquer outra sequência que tenha a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita sem que se altere seu significado (4334 e arara são exemplos de palíndromos).
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavra[50], copia[50];
    int i, tam, iguais = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    tam = strlen(palavra);
    for(i = 0; i < strlen(palavra); i++){
        copia[i] = palavra[tam - 1];
        tam--;
    }

    copia[i] = '\0';
    tam = strlen(palavra);

    printf("Original: %s\nCopia: %s\n", palavra, copia);

    for(i = 0; i < tam; i++){
        if(palavra[i] == copia[i])
            iguais++;
    }

    if(tam == iguais)
        printf("\n(1)E palindroma...\n");
    else
        printf("\n(0)Nao eh palindroma...\n");

    return 0;
}
