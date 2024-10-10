/*7.Explique o código abaixo:*/
#include <stdio.h>
#include <conio.h>
int troca (int *a,int *b); 

int main ( ){
 int num1,num2;
 num1=100;
 num2=200;
 troca (&num1,&num2);
 printf ("\nEles agora valem %d %d\n",num1,num2);
 getch();
}

int troca (int *a,int *b){
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
}
/*Observação: Para saber mais sobre o getch() teve que ser usado a biblioteca conio.h*/
