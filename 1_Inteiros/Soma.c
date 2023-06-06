/*2.  Dado um número inteiro positivo n, calcular a soma dos n primeiros números 
inteiros positivos.*/

#include <stdio.h>

int main (){
int Num, sum = 0, i = 0;
scanf("%d", &Num);
while (Num > 0 ){
    i++;
    sum = sum + i;
    Num--; 
}
printf("%d\n", sum);
return 0;
}