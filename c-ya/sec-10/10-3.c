// Desarrollar un programa que muestre la tabla de multiplicar del 5 (del 5 al 50)
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int iterador, numero;
    printf("\nTABLA DEL CINCO: \n");
    for(iterador = 1; iterador<11; iterador++){
        numero = iterador * 5;
        printf("%d ", numero);
    }
    printf("\n");

    return 0;
}
