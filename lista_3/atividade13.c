/*13. Dada uma sequência de n números reais, determinar o número de vezes que cada um deles ocorre na
mesma.
Exemplo: n = 8
Seqüência: -1.7, 3.0, 0.0, 1.5, 0.0, -1.7, 2.3, -1.7
Saída: -1.7 ocorre 3 vezes
3.0 ocorre 1 vez
0.0 ocorre 2 vezes
1.5 ocorre 1 vez
2.3 ocorre 1 vez*/
#include <stdio.h>
#define MAX 100
int main() {
  int n,             
    i, j,                 
    comp,              
    conta, vezes;
    float seq[MAX];
    printf("Digite o numero de elementos da sequencia: ");
    scanf("%d", &n);
    printf("Digite uma sequencia de %d numeros reais: ", n);
    for (i = 0; i < n; i++)
    scanf("%f", &seq[i]);
    for (i = 0; i < n; i++) {
        vezes = 1;
        j = i + 1;
        while (j < n)
        if (seq[j] != seq[i]) 
	    j++; 
        else {
            vezes++;
            n--;                   
            seq[j] = seq[n];       
            }
        printf("%f ocorre %d vezes\n", seq[i], vezes);
        }
    return 0;
}
