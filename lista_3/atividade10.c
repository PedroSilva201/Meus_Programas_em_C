/*10.Suponha um vetor N com 10 elementos e outro vetor M com 10 elementos. Faça um programa em C que
calcule o produto escalar P de A por B. (Isto é, P =A[1]*B[1] + A[2]*B[2] + ... A[N]+B[N]).
Exemplo: int M[10] = {1,2,3,4,5,6,7,8,9,10};
int N[10] = {1,1,1,1,1,1,1,1,1,1};*/
#include <stdio.h>
int main(){
    int i, P=0, A[10], B[10];
    for (i=0;i<10;i++)
    {
        printf("Vetor um, posicao %i: ", i);
        scanf("%i", &A[i]);
        printf("Vetor dois, posicao %i: ", i);
        scanf("%i", &B[i]);
        P=P+(A[i]*B[i]);
        printf("Soma parcial = %i\n", P);
    }
    printf("\n\nO produto escalar de M por N é: %i", P);
    printf("\n\n");
    return 0;
}
