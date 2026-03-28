#include <stdio.h>
#include <stdlib.h>

int main(){

    // definimos el vector
    int vec[]={0,1,2,3,4,5,6,7,8,9}, iterador, temp;

    // mostramos que el vector original
    printf("\nVECTOR EN SU FORMA INICIAL = \n");
    printf("--------------------------------\n");
    for(iterador = 0; iterador < 10; iterador++){
        printf("Vector[%d] = %d\n",iterador, vec[iterador]);
    }

    // intercambiamos los elementos del vector (desde los extremos hacia adentro)
    for(iterador = 0; iterador < 5; iterador++){
        temp = vec[iterador];
        vec[iterador] = vec[9-iterador];
        vec[9-iterador] = temp;
    }

    // mostramos el vector invertido
    printf("\nVECTOR INVERTIDO = \n");
    printf("--------------------------------\n");
    for(iterador = 0; iterador < 10; iterador++){
        printf("Vector[%d] = %d\n",iterador, vec[iterador]);
    }

    return 0;}
