/*
 * Problema extra. Dados um inteiro 0 < N <= 1000 e uma sequência de N
 * números inteiros, imprimir a sequência eliminando as repetições.
 */

#include <stdio.h>

#define NMAX 1000

int main() {
    int N, i, j = 0, a[NMAX];

    printf("Escolha quantos números você quer adicionar à sequência:\n");
    scanf("%d", &N);
    printf("Escreva a sequência:\n");
    /*É feita uma leitura por laço até o N número*/
    for (i = 0; i < N; ++i) {
        int x, ii;
        scanf("%d", &x);
        /*Estamos acrescentando o valor de ii até o vetor que contém o mesmo valor que x*/
        for (ii = 0; ii < j; ++ii) /*++ii incrementa ii no começo do laço*/
            if (a[ii] == x)
	            break;
        /*Só imprime quando o valor não foi usado ainda e armazena-o*/
        if (ii == j) {
            printf("%d ", x);
            a[j++] = x;
        } 
  }
  printf("\n");
  
  return 0;
}