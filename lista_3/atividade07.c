/*07. Leia um vetor de 8 posições e troque os 4 primeiros valores pelos 4 últimos e vice e
versa. Escreva ao final o vetor obtido.
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
int vetor[8], vetor2[8], cont = 0, p =4, p2 = 0;
while(cont != 8){
printf("\nDigite um numero: ");
scanf("%d",&vetor[cont]);
cont++;}
for(int n = 0;n!= 8;n++){
if(n<= 3){
vetor2[p] = vetor[n];
p++; }
else{
vetor2[p2] = vetor[n];
p2++;}}
printf("Numero : \n");
for(int i = 0; i!= 8; i++){
printf("%d ",vetor2[i]);
}return 0;}
