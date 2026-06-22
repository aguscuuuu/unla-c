/*
    Escriba un programa en C que cuente del 1 al 10 y cuya salida tenga la forma:
    1 2 3 4 5 6 ...
    --------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, iterador;

    a = 1;
    b = 10;

    for(iterador = a; iterador <= b; iterador++){
        printf("%d ", iterador);
    }
    printf("\n");

    return 0;
}

