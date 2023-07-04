/*Modelo para ler e imprimir por meio de funções*/
#include<stdio.h>

int read(int *vetor);
void print(int vetor);

int main(){
    int vetor;
    read(&vetor);
    print(vetor);
    return 0;
}
/* ------------------- IMPLEMENTAÇÃO DAS FUNÇÕES ----------------------------- */
int read(int *vetor){
    int i;
    scanf("%d", vetor);
    return 0;
}
void print(int vetor){
    int i;
    printf ("%d\n", vetor);
}

