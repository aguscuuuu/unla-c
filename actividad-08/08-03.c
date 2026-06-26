/*
    Escribir una función
    char* cadenaDinamica(char *origen);
    que reciba un string y devuelva una copia del mismo en memoria dinámica. Ayuda: utilizar strcpy
    para realizar la copia. Se puede emplear strlen para el tamaño, pero hay que tener en cuenta
    que el espacio para almacenar un string debe incluir lugar para el 0 que lo termina. Utilizar
    la función obtenerMemoria definida anteriormente.
    --------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *obtenerMemoria(size_t tamanio){
    void *puntero = malloc(tamanio);
    if(puntero == NULL){
        printf("Error: No se pudo obtener memoria\n");
        exit(1);
    }
    return puntero;
}

char* cadenaDinamica(char *origen){
    size_t longitud = strlen(origen) + 1; // +1 para incluir el caracter nulo
    char *copia = (char *)obtenerMemoria(longitud * sizeof(char));
    strcpy(copia, origen);
    return copia;
}

int main(){
    char cadena[101];
    printf("Ingrese una frase: ");
    scanf(" %[^\n]", cadena);

    char *copiaCadena = cadenaDinamica(cadena);

    printf("\nCadena original: %s\n", cadena);
    printf("Copia dinamica:  %s\n", copiaCadena);

    free(copiaCadena);
    return 0;
}
