/*
	URL: https://www.tutorialesprogramacionya.com/cya/
	Confeccionar un programa que permita ingresar un valor del
	1 al 10 y nos muestre la tabla de multiplicar del mismo (los primeros 12 t�rminos)
	Ejemplo: Si ingreso 3 deber� aparecer en pantalla los valores 3, 6, 9, hasta el 36.
    --------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int tabla, iterador, numero;
    printf("\nINGRESE UN VALOR DEL UNO AL DIEZ: ");
    scanf("%d", &tabla);
    for(iterador=1; iterador<=12; iterador++){
        numero = iterador * tabla;
        printf("%d ", numero);
    }
    printf("\n");

    return 0;
}
