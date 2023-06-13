/*
 * Problema 1. Dados 0 < N <= 1000 e N notas de alunos de MAC2166
 * (números entre 0.0 e 10.0), imprima quantos alunos tiveram nota
 * maior ou igual à média dessas N notas.
 */

#include <stdio.h>
#define Nmax 1000
int main(){
    int N, i, notas_acima = 0; 
    double x[Nmax], sum = 0, media; 
    printf("Digite quantos alunos fizeram a prova:");
    scanf("%d", &N);
    printf("Digite as notas:");
    for (i = N - 1; i >= 0; i--){
        scanf("%lf", &x[i]);
        sum = sum + x[i];
    }
    /*Calculando a média*/
    media = sum/N;
    for (i = 0; i < N; ++i)
        if (x[i] >= media) notas_acima++;
    
    printf("A média foi de: %.2f e %d alunos tiraram nota maior ou igual a média\n", media, notas_acima);
    return 0;
}