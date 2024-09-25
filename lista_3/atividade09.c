/*09.Dado dois vetores, A (5 elementos) e B (8 elementos), faça um programa em C que imprima todos os
elementos comuns aos dois vetores.
Exemplo: int A[5] = {1,2,4,6,21};
int B[8] = {2,3,6,7,9,11,15,20};*/
#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void)
{
int vetorA[5] = {0}, vetorB[8] = {0}, contador, contadorb, igualdades = 0;
for(contador = 0; contador < 5; contador++){
scanf("%d",&vetorA[contador]);
}
printf("\n\n");
for(contador = 0; contador < 8; contador++){
scanf("%d",&vetorB[contador]);
}
for(contador = 0; contador < 5; contador++){
for(contadorb = 0; contadorb < 8; contadorb++){
if (vetorA[contador] == vetorB[contadorb]){
if (igualdades == vetorA[contador]){
}
else{
printf("\n");
}
}
}
}
return 0;
}
