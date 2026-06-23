/*
   En el ejemplo de la guía 3 se invierte un vector, para lo cual se intercambian los valores de distintas
   posiciones del mismo. Escriba una función intercambiar, que reciba el vector y los índices de las dos
   posiciones y realice el intercambio.
    --------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

// creamos una funcion que muestre los datos de un vector
void mostrar(int vec[]){
    int i;
    for(i=0; i<5; i++){
        printf("Vector[%d] = %d \n", i, vec[i]);
    }
}

int main(){

    // declaramos y creamos el vector
    int vec[]={1,2,3,4,5,6};
    int i, temporal;

    // mostramos el vector
    printf("Vector inicial:\n\n");
    mostrar(vec);

    // invertimos el vector
    for(i=0; i<2; i++){
        temporal  =  vec[i];
          vec[i]  =  vec[4-i];
        vec[4-i]  =  temporal;
    }

    // mostramos el vector nuevamente
    printf("\n\nVector invertido:\n\n");
    mostrar(vec);

    return 0;}
