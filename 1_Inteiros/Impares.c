/*3.  Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.
  Exemplo: Para n=4 a saída deverá ser 1,3,5,7. */

#include <stdio.h>

int main (){
int Num, imp = 1;

scanf("%d", &Num);
while (Num > 0){
    printf("%d ", imp);
    imp = imp + 2;
    Num--;
}
printf("\n");
return 0;
}