/*4. Sem usar as funções para manipulação de strings da biblioteca <string.h>, use a função gets() para armazenar seu nome na string nome[100] e:
*/
/*a. Informe o número de caracteres do seu nome.
*/
#include <stdio.h>
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

/*b. Informe o número de vogais, consoantes e espaços em branco do seu nome.	
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
 char nome[100];
 printf("Informe um nome: ");
 gets(nome);
 printf("\n%s contem %d caracteres ao todo\n\n",nome,strlen(nome));
 return 0;
}

/*c. Exiba seu nome sem vogais e espaços em branco.	
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

char str[100], newstr[100];
 int i = 0, x=0;
    printf ("Insira uma string:\n");
    fgets(str, 99, stdin);     
    while (str[i] != '\0')
    {
        if (str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i]== 'u' || str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I'|| str[i] =='O'|| str[i] == 'U')
        {
            i++;
            continue;
        }
        else
        {
            if (str[i] != ' ')
            {
                newstr[x++] = str [i];
            }
        }
        i++;
    }
printf ("String sem vogais:\n");
puts (newstr);
return 0;
}
/*d. Substituir um caractere informado pelo usuário pelo caractere *.
*/
#include <stdio.h>
#include <string.h>
int main()
{
char string[100];
char ch1;
char ch2;
int x, tam;printf ("Digiteum nome:\n");
gets(string);
printf ("Digite alguma letra que  exista na frase no nome acima:\n");
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
