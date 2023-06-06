/*1.  Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados.*/

#include <stdio.h>

int main (){
int Num;

scanf("%d", &Num);
while (Num != 0){
    Num = Num * Num;
    printf("%d ", Num);
    scanf("%d", &Num);
}
printf("\n");
return 0;
}