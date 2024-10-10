/*4 . Mostre na tabela abaixo todos os passos (teste de mesa) e identifique qual será a saída
do programa em C, para os valores lidos (x = 5 e y = 2), suponha que o endereço de memória atribuído para x=0028FF40 e y=0028FF44
*/
#include<stdio.h>
#include<conio.h>
void func(int *px, int *py) /*A*/
{
  py = px;                          /*B*/
 *py = (*py) * (*px)*(*py); /*C*/
 *px = *py+*px;                 /*D*/
}
void main(void)
{
  int x, y;
  scanf("%d",&x); /*5*/
  scanf("%d",&y); /*2*/
  func(&x,&y);
  printf("x = %d, y = %d\n", x, y);  /*E*/
}
/*Aqui deve ser imaginado como deverá ser este programa em especifico*/
