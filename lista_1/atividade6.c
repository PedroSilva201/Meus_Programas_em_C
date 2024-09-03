/** Dados três números, imprimi-los em ordem crescente.**/

#include <stdio.h>
int main(){
    int n1, n2, n3;
    printf("Digite tres numeros: ");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    if (n3 > n1)
    if (n1 > n2)
    printf("a ordem cresente: %d %d %d\n", n2, n1, n3);
    else if (n2 < n3)
    printf("a ordem cresente: %d %d %d\n", n1, n2, n3);
    if (n1 > n2)
    if (n2 > n3)
    printf("a ordem cresente: %d %d %d\n", n3, n2, n1);
    else if (n3 < n1)
    printf("a ordem cresente: %d %d %d\n", n2, n3, n1);
    if (n1 < n2)
    if (n3 < n1)
    printf("a ordem cresente: %d %d %d\n", n3, n1, n2);
    else if(n3 < n2)
    printf("a ordem cresente: %d %d %d\n", n1, n3, n2);
    return 0;
}
