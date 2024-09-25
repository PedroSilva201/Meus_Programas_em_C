/*03. Escreva um programa principal que:
a) Leia 10 números (vetor de inteiros ) a partir de valores digitados pelo usuário, apenas
armazene no vetor os números pares: Obs: os valores devem ser armazenados em
posições consecutivas.
b) Imprima na tela a quantidade de valores armazenados no vetor(item a), o maior valor
encontrado e também a média desses valores.
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
int vetor[10];
int cont = 0, contB = 0, temp=0;
int maior=0, qtd=0, total=0;
float media = 0;
while (cont != 10){
scanf("%d",&temp);
if(temp % 2 == 0){
vetor[contB] = temp;
contB++;}
cont++;}
for (int i = 0; i <= contB; i++) {
if (vetor[i] > maior) maior = vetor[i];
qtd = contB; total += vetor[i];}
media= total/qtd;
printf("Quantidade de valores armazenados: %d\n",qtd);
printf("Maior numero: %d\n", maior);
printf("Média dos numeros: %f\n",media);
return 0;}
