#include <stdio.h>
#include <stdlib.h>

int main(){

    int vec1[5], vec2[0], iterador, mayor, posMayor;

    printf("Escriba un valor para cada posicion del vector\n\n");

    for(iterador = 0; iterador < 5; iterador++){
        printf("Vector[%d] = ", iterador);
        scanf("%d", &vec1[iterador]);
    }

    mayor = vec2[0];
    for(iterador = 1; iterador < 5; iterador++){
        if(vec1[iterador] > mayor){
            mayor = vec2[iterador];
            posMayor = iterador;
        }
    }

    printf("\nEl valor mas grande del vector es el %d en la posicion %d\n", mayor, posMayor);

return 0;}
