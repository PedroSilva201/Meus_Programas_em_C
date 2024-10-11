/*2. (4,0) Jogos de tabuleiro são atividades comuns de entretenimento na vida cotidiana das pessoas. Uma de suas características é a necessidade do uso de um tabuleiro com localizações bem definidas para o posicionamento de peças, podendo indicar também as fases do jogo.  No livro O Homem que Calculava de Malba Tahan (São Paulo: Record, 2002, p. 120), há uma história na qual um rei deveria efetuar o pagamento pelos serviços de um de seus conselheiros, dando-lhe uma certa quantidade de grãos  de  trigo  a  ser  calculada  da  seguinte  forma:  coloca-se  1  grão de  trigo  na  primeira  casa  do tabuleiro,   2   na   segunda   casa,   4   na   terceira   casa,   8   na quarta   casa   e   assim   dobrando-se sucessivamente até a última casa. Obrigatório à resolução com vetor unidimensional. 1 2 4 8 16 32 64 128 256 512 1024 2048 4096 8192 16384 32768
Considerando o tabuleiro 4 x 4 ilustrado acima, contendo a indicação da ordem das casas, construa um único algoritmo que:
(A) (2,0) calcule, armazene em uma estrutura e escreva em ordem a quantidade de grãos de trigo em cada casa do tabuleiro;
(B) (2,0) calcule, armazene em uma variável e escreva a quantidade total de grãos de trigo presentes no tabuleiro. Resultado da execução:
*/
#include <stdio.h>
#include <math.h>
int main(){
    int casa[16], numero = 2, total = 0;
    for(int i = 0; i < 16; i++){
        casa[i] = pow(numero, i);
        printf("casa %d: %d\n",i,casa[i]);
        total+=casa[i];
    }
    printf("Soma total dos numeros: %d", total);
    return 0;
}
