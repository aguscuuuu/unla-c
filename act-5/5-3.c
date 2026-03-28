#include <stdio.h>
#include <stdlib.h>

int buscarBinario(int vector[], int pos1, int pos2, int buscado){

    if(pos1 <= pos2){ // si el primer elemento del rango de búsqueda es menor o igual al último... (indica que todavía hay elementos en el rango para buscar)

        int medio = pos1 + (pos2 - pos1) / 2; // (pos2 - pos1) / 2 calcula la mitad del rango, al sumar pos1 a esta mitad, se obtiene el índice del elemento en el medio del rango

        if(vector[medio] == buscado){ // si ese elemento del vector es igual al numero buscado...
            return medio; // devolvemos ese elemento (la posicion)
        }else if(vector[medio] < buscado){ // si ese elemento es menor que el numero buscado...
            return buscarBinario(vector, medio + 1, pos2, buscado); // avanzamos de posicion
        }else{ // sino
            return buscarBinario(vector, pos1, medio - 1, buscado); // retrocedemos de posicion
        }
    }
    return -1; // no se encontó el elemento
}

int main(){

    int vec[]={13, 25, 57, 34, 68};
    int n = sizeof(vec) / sizeof(vec[0]); // sacamos la dimension del vector (esto incluye el cero)
    int buscado;

    printf("\nQue numero buscas?\n-> ");
    scanf("%d", &buscado);

    int indice = buscarBinario(vec, 0, n-1, buscado);

    if(indice != -1){
        printf("\nEl elemento %d se encuentra en la posicion %d\n", buscado, indice);
    }else{
        printf("\nEl elemento %d no se encuentra dentro del vector\n", buscado);
    }

    return 0;
}
