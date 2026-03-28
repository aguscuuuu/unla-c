#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, iterador;

    a = 1;
    b = 10;

    for(iterador = b; iterador >= a; iterador--){
        printf("%d ", iterador);
    }
    printf("\n");

    return 0;
}
