/*06. Dada uma sequência de n números, imprimi-la na ordem inversa a da leitura.
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
int vetor[5], cont = 0;
while(cont != 5){
printf("\nDigite um numero: ");
scanf("%d",&vetor[cont]);
cont++;}
printf("Numero inverso: \n");
for(int i = 4; i>=0; i--){
printf("%d ",vetor[i]);
}return 0;}
