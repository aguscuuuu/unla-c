// Ingresar por teclado una oración de hasta 200 caracteres.
// Se sabe que el operador ingresa solo un caracter en blanco entre
// palabras. Imprimir por pantalla la cantidad de palabras que tiene la oración.
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
