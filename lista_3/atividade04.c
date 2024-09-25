/*04. Dado um vetor de 5 posições contendo 0 ou 1(base binária), transformá-lo para a base
decimal. Criar uma função que recebe esse vetor e retorne o número (base decimal).
Protótipo da função: int transforma_binario_decimal(int vetor[5])
*/
#include <stdio.h>
#include<math.h>
int transforma_binario_decimal(int vetor[5]){
int e = 4, dec = 0;
for(int i = 0; i != 5; i++){
dec = dec + pow(2, e) *vetor[i]; e--;}return dec;}
int main(void) {
int bin[5], dec = 0, cont = 0;
printf("Digite um numero binário: ");
while(cont != 5){
scanf("%d", &bin[cont]);cont++;}
dec = transforma_binario_decimal(bin);
printf("Decimal: %d\n",dec); return 0;}
