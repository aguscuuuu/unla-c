/*
    Utilizando el array anterior, crear una función
    int busquedaSecuencial(char *vector[], int longitud, char* aBuscar)
    que devuelva la posición del string aBuscar en vector por el método de búsqueda secuencial, utilizando
    punteros para el acceso al vector. En caso de no encontrarse, debe devolver -1.
    --------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>

int busquedaSecuencial(char *vector[], int longitud, char *aBuscar){
    for(int iterador = 0; iterador < longitud; iterador++){
        if(strcmp(vector[iterador], aBuscar) == 0){
            return iterador;
        }
    }
    return -1;
}

int main(){
    char *arr[] = {"A veces pienso", "Chau me voy", "Siento que va a pasar", "Felicitaciones por eso", "No quiero verte"};
    int longitud = sizeof(arr) / sizeof(arr[0]);

    printf("El array contiene las siguientes frases:\n");
    for(int i = 0; i < longitud; i++){
        printf("[%d] %s\n", i, arr[i]);
    }

    char aBuscar[100];
    printf("\nQue frase buscas?\n-> ");
    scanf("%99[^\n]", aBuscar);

    int posicion = busquedaSecuencial(arr, longitud, aBuscar);

    if(posicion != -1){
        printf("Busqueda secuencial: '%s' se encuentra en la posicion %d\n", aBuscar, posicion);
    } else {
        printf("'%s' no se encuentra en el arreglo\n", aBuscar);
    }

    return 0;
}
