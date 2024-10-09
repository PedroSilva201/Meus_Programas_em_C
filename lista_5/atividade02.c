/*2. Faça uma rotina que recebe uma string qualquer e retorna-o invertido. Por exemplo, se a string passada por parâmetro fosse "teste", a rotina deve retornar "etset".
*/
#include <stdio.h>
#include <string.h>
int main(){
    char palavra[23],inverso[23];
    int i,j;
    printf("Digite uma palavra: ");
    scanf("%s",palavra);
    j=strlen(palavra);
    for(i=0; i<j; i++){
        inverso[i] = palavra[j-i-1];
    }
    inverso[i]='\0';
    printf("%s\n",inverso);
    for(i=0;i<j+2;i++);
    return 0;
}
