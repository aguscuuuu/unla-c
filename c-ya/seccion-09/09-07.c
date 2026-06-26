/*
	URL: https://www.tutorialesprogramacionya.com/cya/
	Desarrollar un programa que permita cargar n n�meros enteros y luego nos informe cu�ntos
	valores fueron pares y cu�ntos impares. Emplear el operador �%� en la condici�n de la
	estructura
	condicional (este operador retorna el resto de la divisi�n de dos valores, por ejemplo 11%2
	retorna un 1):
	if (valor%2==0)         Si el if da verdadero luego es par.
    --------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cantidad, iterador=0, numero, cantPares=0, cantImpares=0;
    printf("\nNUMEROS A CARGAR: ");
    scanf("%d", &cantidad);

    while(iterador<cantidad){
        printf("-> ");
        scanf("%d", &numero);
        if(numero & 2 == 0){
            cantPares++;
        }else{
            cantImpares++;
        }
        iterador++;
    }
    printf("\nCANTIDAD DE NUMEROS PARES: %d", cantPares);
    printf("\nCANTIDAD DE NUMEROS IMPARES: %d\n", cantImpares);
    return 0;
}
