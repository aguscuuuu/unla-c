// Elaborar una función que nos retorne el perímetro de un
// cuadrado pasando como parámetros el valor de un lado.
#include <stdio.h>
#include <stdlib.h>
int perimetro(int lado){
    int perimetro = lado * 4;
    return perimetro;
}
int main()
{
    int lado, resultado;
    printf("\nESCRIBA EL LADO DE UN CUADRADO: ");
    scanf("%d", &lado);

    resultado = perimetro(lado);

    printf("\nPERIMETRO DEL CUADRADO: %d\n", resultado);

    return 0;
}
