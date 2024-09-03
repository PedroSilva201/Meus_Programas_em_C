/** ⦁	Faça um programa que solicite o ano em que uma pessoa nasceu e retorne sua idade.**/

#include <stdio.h>
int main(){
    int anoatual;
    int anodenascimento;
    int idade;
    printf("Digite o ano atual: ");
    scanf("%d",&anoatual);
    printf("Digite o seu ano de nascimento: ");
    scanf("%d",&anodenascimento);
    idade =(anoatual-anodenascimento);
    printf("Sua idade atual é de %d anos",idade);
    return 0;
}
