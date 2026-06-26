/*
	URL: https://www.tutorialesprogramacionya.com/cya/
	Se ingresa por teclado un n�mero positivo de uno o dos d�gitos (1..99) mostrar un mensaje
	indicando si el n�mero tiene uno o dos d�gitos.(Tener en cuenta que condici�n debe
	cumplirse
	para tener dos d�gitos un n�mero entero)
    --------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("\nINGRESAR UN NUMERO ENTERO POSITIVO DE UNO O DOS DIGITOS:\n");
    scanf("%d", &numero);

    if(numero>=0 && numero<=9){
        printf("\nEL NUMERO ES DE UNA CIFRA\n");
    }else if(numero>=10 && numero<=99){
        printf("\nEL NUMERO ES DE DOS CIFRAS\n");
    }else{
        printf("\nEL NUMERO NO CUMPLE CON LAS CONDICIONES REQUERIDAS\nVOLVER A EJECUTAR\n");
    }

    return 0;
}
