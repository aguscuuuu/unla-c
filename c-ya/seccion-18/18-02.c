/*
	URL: https://www.tutorialesprogramacionya.com/cya/
	Elaborar una funci�n que nos retorne el per�metro de un
	cuadrado pasando como par�metros el valor de un lado.
    --------------------------------------------------------------------------------------------------------
*/
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
