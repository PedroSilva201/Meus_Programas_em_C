/*1.Explique o código abaixo:*/
#include <stdio.h>
int main( ) { 
		int  num1, num2, * p, * q; 
		num1 = 13; 
		num2 = 10; 
		p  = &num1;    
		q = p;          
		*q = 56;    
		printf ("v1:%d\n",num1);
      		printf ("v2:%d\n",num2);
      		printf ("p:%p\n",p);
    		 printf ("q:%p\n",q);
     	 	printf ("p:%d\n",*p);
      	 	printf ("q:%d\n",*q);	
} 
/*Atraves dos pontos P e Q, sairá um código alfanumerico mostrando os elementos em código como endereço de memória*/
