/*4.  Dados um inteiro x e um inteiro não-negativo n, calcular x n.*/

#include <stdio.h>

int main (){
int base, pot = 1, expoente;

scanf("%d %d", &base, &expoente);
while (expoente > 0){
    pot = pot * base;
    expoente--;
}
printf("%d\n", pot);
return 0;
}