/** Crie um programa por meio do qual o usuário irá digitar a operação desejada e dois valores, ao final deverá ser exibido o resultado da operação. 
Opções disponíveis: 1 – Divisão; 2 – resto da divisão; 3 – adição; 4 – multiplicação.
Obs: Utilizar: do-while (para o menu) e o comando switch.       
**/

#include <stdio.h>
#include <stdlib.h>
int main ()
{
  int opcao, numero1, numero2, resto, res;
  do
    {
      printf("Entre com a operacao desejada: \n1-Divisao \n2-Resto da divisao \n3-Adicao \n4-Multiplicacao \n0-Sair \n");
      scanf ("%d", &opcao);
      if (opcao > 0 && opcao < 5)
	{
	  printf ("Entre com o primeiro numero: ");
	  scanf ("%d", &numero1);
	  printf ("Entre com o segundo numero: ");
	  scanf ("%d", &numero2);
	}
      switch (opcao)
	{
	case 0:
	  printf ("Saindo...\n");
	  break;
	case 1:
	  while (numero2 == 0)
	    {
	      printf ("Nao existe divisao por zero!\nDigite outro valor: ");
	      scanf ("%d", &numero2);
	    }
	  printf ("Resultado: %d\n\n", numero1 / numero2);
	  break;
	case 2:
	  printf ("Resultado: %d\n\n", resto = numero1 % numero2);
	  break;
	case 3:
	  printf ("Resultado: %d\n\n", numero1 + numero2);
	  break;
	case 4:
	  printf ("Resultado: %d\n\n", numero1 * numero2);
	  break;
	default:
	  printf ("Opcao invalida. \ndigite outra opcao: ");
	}
    }
  while (opcao != 0);}
