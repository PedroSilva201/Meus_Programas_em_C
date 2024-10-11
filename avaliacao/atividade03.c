/*3. Sem usar as funções para manipulação de strings da biblioteca <string.h>,use a função gets() para armazenar seu nome na string nome[100] e:
*/
/*A.(0,5) Informe o número de caracteres do seu nome.
*/
#include <string.h>

int main(void)
{
  char nome[100];
  int comprimento;
  
  printf("Entre seu nome: ");
  gets(nome);
  comprimento = strlen(nome);
  
  printf("Seu nome tem  %d caracteres.\n", comprimento);
}
/*B.(0,5) Informe o número de vogais, consoantes e espaços em branco do seu nome.
*/
#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 
int main() {   
char s[100]; 
int i, vogal, consoante, espacoembranco;
vogal = 0; 
consoante = 0;
espacoembranco = 0;
printf("Digite um nome: "); 
gets (s); 
for (i=0; s[i]!='\0'; i++) 
{{  
if (s[i]=='a' || s[i]== 'e' || s[i]==' i' || s[i]=='o' || s[i]== 'u' || 
s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' ||  s[i]=='U') 
{  
 vogal++; 
}
}
{  
     if (s[i]=='b' || s[i]== 'c'|| s[i]=='d' || s[i]=='f' || s[i]== 'g' || 
         s[i]=='h' || s[i]=='j' || s[i]=='k' || s[i]=='l' ||  s[i]=='m' ||
         s[i]=='n' || s[i]=='p' || s[i]=='q' || s[i]=='r' ||  s[i]=='s' ||
         s[i]=='t' || s[i]=='v' || s[i]=='w' || s[i]=='x' ||  s[i]=='y' ||
         s[i]=='z' || s[i]=='B' || s[i]=='C' || s[i]=='D' ||  s[i]=='F' ||
         s[i]=='G' || s[i]=='H' || s[i]=='J' || s[i]=='K' ||  s[i]=='L' ||
         s[i]=='M' || s[i]=='N' || s[i]=='P' || s[i]=='Q' ||  s[i]=='R' ||
         s[i]=='S' || s[i]=='T' || s[i]=='V' || s[i]=='W' ||  s[i]=='X' ||
         s[i]=='Y' || s[i]=='Z' ) 
{  
consoante++; 
  }
 }
    { 
if (s[i] == ' ') 
{  
espacoembranco++;
}
} 
}
printf ("\nForam encontrados %d vogal(ais).", vogal);
printf ("\nForam encontrados %d consoante(s).", consoante);
printf ("\nForam encontrados %d espaco(s) em branco.", espacoembranco);
return 0; 
}
/*C.(0,5) Exiba seu nome sem vogais e espaços em branco.*/
#include <stdio.h>
#include <string.h>
int main(){
    char string[100];
    int cont = 0;
    printf("Forneca um nome com vogais e espacos em branco: ");
    fgets(string, sizeof(string), stdin);
    int len = strlen(string); 
    while(string[cont] !='\0' ){{
        if(string[cont] != 'a' && string[cont] != 'A' && string[cont] != 'e' && string[cont] != 'E' && string[cont] != 'i' && string[cont] != 'I' && string[cont] != 'o' && string[cont] != 'O' && string[cont] != 'u' &&string[cont] != 'U')
            printf("%c", string[cont]);
        cont++;
    }
    for (int i = 0, posicao = 0; i < len; i++, posicao++) {
        if (string[posicao] == ' ') posicao++;
        string[i] = string[posicao];
    }
    }
    return 0;
}
 
/*D.(0,5) Substituir um caractere informado pelo usuário pelo caractere *.*/
#include <stdio.h>
#include <string.h>
int main()
{
char string[100];
char ch1;
char ch2;
int x, tam;printf ("Digite um nome:\n");
gets(string);
printf ("Digite alguma letra que existe no nome acima:\n");
scanf ("%c", &ch1);
tam=strlen(string);
for (x=0;x<tam;x++){
if (string[x]==ch1){
string[x]='*';
}
}
printf ("%s", string);
getch();
return 0;
}
