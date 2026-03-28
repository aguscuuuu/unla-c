#include <stdio.h>
#include <stdlib.h>

// creamos una función que permita establecer los valores de un vector
void escribirVector(int vec[], int longitud){
    int iterador;
    int mayor = vec[0];
    int posMayor = 0;

    for(iterador = 0; iterador < longitud; iterador++){
        printf("Vector[%d] = ", iterador);
        scanf("%d", &vec[iterador]);
    }
}
// creamos una función que permita encontrar el valor más grande dentro del vector
int encontrarMayor(const int vec[], int longitud){ // el 'const' indica que el valor no se puede cambiar
    int iterador;
    int mayor = vec[0];
    int posMayor = 0;
    for(iterador = 1; iterador < longitud; iterador++){
        if(vec[iterador] > mayor){
            mayor = vec[iterador];
            posMayor = iterador;
        }
    }
    return mayor; // retorna el valor del mayor
}

int main(){

    int vec1[5], vec2[0], iterador, mayor, posMayor;

    printf("Escriba un valor para cada posicion del vector\n\n");
    escribirVector(vec1, 5);

    mayor = encontrarMayor(vec1, 5);

    printf("\nEl valor mas grande del vector es el %d", mayor);

return 0;}
