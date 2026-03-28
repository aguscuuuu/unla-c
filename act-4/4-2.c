#include <stdio.h>
#include <stdlib.h>

// creamos una funcion que muestre los datos de un vector
void mostrar(int vec[]){
    int i;
    for(i=0; i<5; i++){
        printf("Vector[%d] = %d \n", i, vec[i]);
    }
}
// creamos una función que invierte los valores de un vector de longitud 5
void invertir(int vec[]){
    int i, temporal;
    for(i=0; i<2; i++){
        temporal = vec[i];
          vec[i] = vec[4-i];
        vec[4-i] = temporal;
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
    invertir(vec);

    // mostramos el vector nuevamente
    printf("\n\nVector invertido:\n\n");
    mostrar(vec);

    return 0;}
