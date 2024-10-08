/*2. Crie uma matriz 4x4 com elementos aleatórios no intervalo [0, 20]:
*/
/*a. Imprima todos os elementos de uma linha informada pelo usuário.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int num, linha, coluna, matriz[4][4];
    srand (time(NULL));
    for (linha=0; linha < 4; linha++)
        for (coluna=0; coluna <4; coluna++)
        {
            num= (rand() % 21);
            matriz[linha][coluna]=num;
        }
    for (linha=0; linha < 4; linha++)
    {
        for(coluna=0; coluna < 4; coluna++)
            printf("%d ", matriz [linha][coluna]);
        printf("\n");
    }
    printf("Informe uma linha: ");
    scanf("%d",&linha);
    linha--;
    for(coluna=0;coluna < 4; coluna++)
    printf("%d ", matriz[linha][coluna]);
    return 0;
}
/*2. Crie uma matriz 4x4 com elementos aleatórios no intervalo [0, 20]:
*/
/*b. Imprima todos os elementos de uma coluna informada pelo usuário.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int num, linha, coluna, matriz[4][4];
    srand (time(NULL));
    for (linha=0; linha < 4; linha++)
        for (coluna=0; coluna <4; coluna++)
        {
            num= (rand() % 21);
            matriz[linha][coluna]=num;
        }
    for (linha=0; linha < 4; linha++)
    {
        for(coluna=0; coluna < 4; coluna++)
            printf("%d ", matriz [linha][coluna]);
        printf("\n");
    }
    printf("Informe uma coluna: ");
    scanf("%d",&coluna);
    coluna--;
    for(linha=0;linha < 4; linha++)
    printf("%d ", matriz[linha][coluna]);
    return 0;
}
/*2. Crie uma matriz 4x4 com elementos aleatórios no intervalo [0, 20]:
*/
/*c. Imprima a soma dos elementos de uma linha informada pelo usuário.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num, linha, coluna, matriz[4][4],soma=0;
     
     srand (time(NULL));
     for (linha=0;linha < 4; linha++)
       for (coluna=0;coluna <4; coluna++)
       { 
     
         num=( rand() % 21);
         matriz[linha][coluna]=num;
         }  
            
           
     for (linha=0;linha < 4; linha++)
     {
       for (coluna=0;coluna <4; coluna++)    
           printf ("%d ",matriz[linha][coluna]);
        printf ("\n");
      } 
      
     printf ("\nInforme uma linha :");
     scanf ("%d",&linha);
     linha--;
     for (coluna=0;coluna <4; coluna++)   { 
           printf ("%d ",matriz[linha][coluna]);  
           soma=soma+ matriz[linha][coluna];
     }
    printf ("A soma é: %d",soma);           
     return 0;      
}
/*2. Crie uma matriz 4x4 com elementos aleatórios no intervalo [0, 20]:
*/
/*d. Imprima a soma dos elementos de uma coluna informada pelo usuário.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num, linha, coluna, matriz[4][4],soma=0;
     
     srand (time(NULL));
     for (linha=0;linha < 4; linha++)
       for (coluna=0;coluna <4; coluna++)
       { 
     
         num=( rand() % 21);
         matriz[linha][coluna]=num;
         }  
            
           
     for (linha=0;linha < 4; linha++)
     {
       for (coluna=0;coluna <4; coluna++)    
           printf ("%d ",matriz[linha][coluna]);
        printf ("\n");
      } 
      
     printf ("\nInforme uma coluna :");
     scanf ("%d",&coluna);
     coluna--;
     for (linha=0;linha <4; linha++)   { 
           printf ("%d ",matriz[linha][coluna]);  
           soma=soma+ matriz[linha][coluna];
     }
    printf ("A soma é: %d",soma);           
     return 0;      
}

/*2. Crie uma matriz 4x4 com elementos aleatórios no intervalo [0, 20]:
*/
/*e. Imprima a matriz transposta.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tamL = 4, tamC = 4;
    int l, c, mat[tamL][tamC], trans[tamC][tamL];
	
    srand(time(NULL));

    for(l = 0; l < tamL; l++){
        for(c = 0; c < tamC; c++){
            mat[l][c] = rand() % 20;
        }
    }

    printf("\nMatriz original:\n");
    for(l = 0; l < tamL; l++){
        for(c = 0; c < tamC; c++){
            printf("%3d ", mat[l][c]);
        }
        printf("\n");
    }
        for(l = 0; l < tamL; l++){
        for(c = 0; c < tamC; c++){
            trans[c][l] = mat[l][c];
        }
    }
    printf("\nMatriz transposta:\n");
    for(l = 0; l < tamC; l++){
        for(c = 0; c < tamL; c++){
            printf("%3d ", trans[l][c]);
        }
        printf("\n");
    }

    return 0;
}
