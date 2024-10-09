/*1. Criar um programa que solicita no teclado uma frase com, no máximo, 100 letras. Se o tamanho for maior que 40, exibir uma mensagem e solicitar novamente a frase, senão, imprimir a frase na vertical.
*/
#include<stdio.h> 
#include<stdlib.h> 
#include <string.h> 
int main() 
{ 
char frase[100];int x,tam; 
printf("\nEscreva uma palavra ou frase: "); 
gets(frase); 
tam=strlen(frase); 
while(tam>40) 
{ 
printf("\no tamanho esta invalido, o maximo e de 40 caracteres"); 
printf("\ndigita novamente a palavra ou frase"); 
gets(frase);
tam=strlen(frase); 
} 
printf("\n\n"); 
for(x=0;x<=tam;x++) 
printf("\n%c",frase[x]); 
printf("\n\n"); 
return(0); 
}
