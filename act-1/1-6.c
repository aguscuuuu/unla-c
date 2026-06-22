/*
    Escriba un programa en C que cuente de 2 a 20 de a 2.
    --------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, iterador;

    a = 2;
    b = 20;

    for(iterador = a; iterador <= b; iterador+=2){
        printf("%d ", iterador);
    }
    printf("\n");

    return 0;
}
