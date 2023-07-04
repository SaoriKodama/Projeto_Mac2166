/*Modelo para ler e imprimir por meio de funções*/
#include<stdio.h>
#define max 3

int read(int vetor[]);
void print(int vetor[]);

int main(){
    int vetormain[max];
    read(vetormain);
    print(vetormain);
    return 0;
}
/* ------------------- IMPLEMENTAÇÃO DAS FUNÇÕES ----------------------------- */
int read(int vetor[]){
    int i;
    for (i = 0; i < max; i++)
        scanf("%d", &vetor[i]);
    return 0;
}
void print(int vetor[]){
    int i;
    for (i = 0; i < max; i++)
        printf ("%d ", vetor[i]);
}

