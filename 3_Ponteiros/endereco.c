#include <stdio.h>

int main(){
    int x = 10;
    printf("x (do main()): valor = %d / endereco = %p\n", x, (void *)&x);
    return 0;
}
