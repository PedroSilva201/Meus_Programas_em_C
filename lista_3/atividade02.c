/*02. Escreva um programa principal que:
a) Leia 10 números (vetor inteiros) a partir de valores digitados pelo usuário.
b) Imprima na tela apenas os valores maiores e igual a 20.
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
int vetor[10] ;
int cont = 0;
while (cont != 10){
scanf("%d",&vetor[cont]);
cont++;}
for(int n=0; n!=10; n++){
if(vetor[n]>=20)
printf("%d ",vetor[n]);
}return 0;}
