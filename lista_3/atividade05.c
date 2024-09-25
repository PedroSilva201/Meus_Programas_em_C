/*05. Faça um programa (main) que popule o vetor de 5 posições com 0 ou 1 e chame a
função transforma_binario_decimal e exiba o resultado (base decimal).
*/
#include <stdio.h>
#include<math.h>
#include <time.h>
#include <stdlib.h>
int transforma_binario_decimal(int vetor[5]){
int e = 4, dec = 0;
for(int i = 0; i != 5; i++){
dec = dec + pow(2, e) *vetor[i]; e--;}return dec;}
int main(void) {
int bin[5], dec = 0, cont = 0;
srand( (unsigned)time(NULL) );
while(cont != 5){
bin[cont]= rand()%2; cont++;}
dec = transforma_binario_decimal(bin);
printf("Decimal: %d\n",dec); return 0;}
