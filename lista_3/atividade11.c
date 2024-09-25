/*11. Durante uma corrida de automóveis com N voltas de duração foram anotados para um piloto, na ordem,
os tempos registrados em cada volta. Fazer um programa em
C para ler os tempos das N voltas, calcular e imprimir:
a. melhor tempo;
b. a volta em que o melhor tempo ocorreu;
c. tempo médio das N voltas;*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int x;
    do{
        printf("Digite o numero de voltas: \n");
        scanf("%i", &x);
        }while((x<=0)||(x>=15));
    int i=1;
    int soma=0;
    int menor;
    float media;
    int melhorvolta=0;
    int tempo=0;
    for(i=1;i<=x;i++){
        printf("Digite o tempo da volta %i\n", i);
        scanf("%i", &tempo);
        soma+= tempo;
        if(i==1){
            menor = tempo;
            melhorvolta = 1;
        }else if(tempo < menor){
            menor = tempo;
            melhorvolta = i;
            }
        }
        media = (float)soma / x;
        printf("Melhor tempo computado: %i\n", menor);
        printf("Volta em que ocorreu o melhor tempo: %i\n", melhorvolta);
        printf("Tempo medio das voltas: %6.6f\n", media);
        return 0;
}
