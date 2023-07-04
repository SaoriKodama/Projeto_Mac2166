/*Para contar quantos caracteres (inclusive espaços) até o ponto final*/
#include <stdio.h>

int main(){
    char c;
    int t = 0;
    scanf("%c", &c);
    while (c != '.') {
        t++;
        scanf("%c", &c);
    }
    printf("%d characters\n", t);
    return 0;
}