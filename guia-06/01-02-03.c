#include <stdio.h>
#include <stdlib.h>

// 1)
void *obtenerMemoria(size_t tamanio){ // la función recibe parametro de tipo size_t (tamaño de memoria a asignar)
    void *puntero = malloc(tamanio); // se encarga de solicitar memoria dinámica usando malloc y devuelve un puntero a la memoria asignada
    if(puntero == NULL){ // si la asignación de memoria falla...
        printf("Error: No se pudo obtener memoria\n"); // muestra un mensaje de error
        exit(1); // y termina el programa
    }
    return puntero; // devuelve un puntero genérico
}
// 2)
void *copiarVector(int *vector, int longitud){
    int *copia = (int *)obtenerMemoria(longitud * sizeof(int)); // calcula el tamaño necesario para almacenar una copia del vector como enteros

    for(int iterador = 0; iterador < longitud; iterador++){ // mientras recorremos el vector...
        copia[iterador] = vector[iterador]; // copia cada elemento del vector original en el nuevo vector copia, elemento por elemento
    }
    return copia; // devuelve ese vector copia
}
// 3)
char* cadenaDinamica(char *origen){
    size_t longitud = strlen(origen) + 1; // +1 para incluir el caracter nulo
    char *copia = (char *)obtenerMemoria(longitud * sizeof(char)); // tamaño en bytes para la copia
    strcpy(copia, origen); // copiar la cadena usando strcpy

    return copia;
}
int main(){

    int elementos; // cantidad de elementos que tendrá el arreglo

    printf("\nIngrese la cantidad de elementos del vector: ");
    scanf("%d", &elementos);

    int *vector = (int *)obtenerMemoria(elementos * sizeof(int));
    // int *vector declara una variable llamada vector que es un puntero a un entero
    // sizeof(int) calcula el tamaño en bytes de un entero
    // se multiplica la cantidad de elementos del vector por el tamaño en bytes de cada entero
    // (en la mayoría de plataformas modernas un entero vale 4 bytes)
    // a ese resultado malloc asigna una cantidad específica de memoria
    // (int *) se utiliza para castear, esto se hace porque malloc devuelve un puntero genérico void y nosotros lo necesitamos int
    if(vector == NULL){
        return -1;
    }

    for(int iterador = 0; iterador < elementos; iterador++){ // recorre el vector
        vector[iterador] = iterador * 10; // se hace una cuenta cualquiera para tener valores
    }

    int *copia = (int *)copiarVector(vector, elementos);

    printf("\nVector original:\n");
    for(int iterador = 0; iterador < elementos; iterador++){
        printf("%d ", vector[iterador]);
    }
    printf("\n");

    printf("\nCopia del vector:\n");
    for(int iterador = 0; iterador < elementos; iterador++){
        printf("%d ", copia[iterador]);
    }
    printf("\n");

    char cadena[101];
    printf("\n\nIngrese una frase: ");
    scanf(" %[^\n]", cadena);

    char *copiaCadena = cadenaDinamica(cadena);
    printf("\nCadena original:\n%s\n", cadena);
    printf("\nCopia de cadena:\n%s\n", copiaCadena);

    free(vector); // se libera la memoria pedida para garantizar que no haya fugas
    free(copia);
    free(copiaCadena);

    return 0;
}
