/*
    Ordenar el array con el método de ordenamiento burbuja y realizar una función
    int busquedaBinaria(char *vector[], int longitud, char* aBuscar)
    que devuelva la posición del string aBuscar en vector por el método de búsqueda binaria. En caso de
    no encontrarse, debe devolver -1. Aplicarla al vector ordenado.
    --------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>

void ordenarPorBurbuja(char *arr[], int longitud){
    for(int iterador1 = 0; iterador1 < longitud - 1; iterador1++){
        for(int iterador2 = 0; iterador2 < longitud - iterador1 - 1; iterador2++){
            if(strcmp(arr[iterador2], arr[iterador2 + 1]) > 0){
                char *temp = arr[iterador2];
                arr[iterador2] = arr[iterador2 + 1];
                arr[iterador2 + 1] = temp;
            }
        }
    }
}

int busquedaBinaria(char *arr[], int longitud, char *aBuscar){
    int inicio = 0;
    int fin = longitud - 1;
    while(inicio <= fin){
        int medio = inicio + (fin - inicio) / 2;
        int comparacion = strcmp(arr[medio], aBuscar);
        if(comparacion == 0){
            return medio;
        } else if(comparacion < 0){
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }
    return -1;
}

int main(){
    char *arr[] = {"A veces pienso", "Chau me voy", "Siento que va a pasar", "Felicitaciones por eso", "No quiero verte"};
    int longitud = sizeof(arr) / sizeof(arr[0]);

    printf("Array original:\n");
    for(int i = 0; i < longitud; i++){
        printf("[%d] %s\n", i, arr[i]);
    }

    ordenarPorBurbuja(arr, longitud);

    printf("\nArray ordenado alfabeticamente:\n");
    for(int i = 0; i < longitud; i++){
        printf("[%d] %s\n", i, arr[i]);
    }

    char aBuscar[100];
    printf("\nQue frase buscas (en el array ordenado)?\n-> ");
    scanf("%99[^\n]", aBuscar);

    int posicion = busquedaBinaria(arr, longitud, aBuscar);

    if(posicion != -1){
        printf("Busqueda binaria: '%s' se encuentra en la posicion %d del arreglo ordenado\n", aBuscar, posicion);
    } else {
        printf("'%s' no se encuentra en el arreglo\n", aBuscar);
    }

    return 0;
}
