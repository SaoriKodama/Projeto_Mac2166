/*
 * Problema 2. Dado um inteiro N > 0 e uma sequência de N lançamentos de
 * uma roleta (números inteiros no intervalo [0, 36]), calcular a
 * frequência de cada número.
 */
#include <stdio.h>

int main(){
    int N, x[36], i;
    for(i = 0; i <= 36 ; i++)
        x[i] = 0;
    printf("Digite o número de lançamentos:\n");
    scanf("%d", &N);
    printf("Digite o valor de cada lançamento:\n");
    for(i = 0; i < N ; i++){
    int valor = 0;
        scanf("%d", &valor);
        x[valor]++;
    }
    for(i = 0; i <= 36 ; i++) 
    printf("%d_%d\n", i, x[i]);
    return 0;
}