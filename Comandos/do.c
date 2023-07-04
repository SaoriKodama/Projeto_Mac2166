/*
 * O comando do...while é útil quando você precisa garantir que um bloco 
 * de código seja executado pelo menos uma vez antes de verificar uma 
 * condição.
*/
#include <stdio.h>

int main() {
    int i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);
    return 0;
}