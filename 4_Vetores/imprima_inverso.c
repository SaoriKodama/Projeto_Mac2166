/* 1.  Dada uma seqüência de n números, imprimi-la na ordem inversa à da leitura. */

/* Lembre-se que a dimensão de um vetor deve ser um valor constante */
#include <stdio.h>

int main() {
    int x[1000], N, i;
    printf("digite quantos números você quer adicionar:");
    scanf("%d", &N);
    printf("agora digite a sequência de números:");
    for (i = 0; i < N; i++)
    scanf("%d", &x[i]);

    for (i = N - 1; i >= 0; i--) /* O valor de i inicia com N - 1 porque os valores começam em x[0] e não x[1]*/
    printf("%d ", x[i]);

    printf("\n");
  
    return 0;
}