/*
	URL: https://www.tutorialesprogramacionya.com/cya/
	Ingresar por teclado una oraci�n de hasta 200 caracteres.
	Se sabe que el operador ingresa solo un caracter en blanco entre
	palabras. Imprimir por pantalla la cantidad de palabras que tiene la oraci�n.
    --------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char oracion[201];
    int iterador=0, espacios=0, palabras;

    printf("\nINGRESE UNA ORACION: ");
    gets(oracion);

    while(oracion[iterador] != '\0'){
        if(oracion[iterador] == ' '){
            espacios++;
        }
        iterador++;
    }
    palabras = espacios + 1;
    printf("\nCANTIDAD DE PALABRAS: %d\n", palabras);


    return 0;
}
