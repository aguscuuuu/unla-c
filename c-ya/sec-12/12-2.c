// Realizar un programa que pida la carga de dos vectores numéricos enteros de 4
// elementos. Obtener la suma de los dos vectores, dicho resultado guardarlo en un
// tercer vector del mismo tamaño. Sumar componente a componente.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int iterador, vector1[4], vector2[4], vector3[4];

    printf("\nINGRESE VALORES PARA EL VECTOR 1:\n");
    for(iterador=0; iterador<4; iterador++){
        printf("vector1[%d] = ", iterador);
        scanf("%d", &vector1[iterador]);
    }

    printf("\nINGRESE VALORES PARA EL VECTOR 2:\n");
    for(iterador=0; iterador<4; iterador++){
        printf("vector2[%d] = ", iterador);
        scanf("%d", &vector2[iterador]);
    }

    printf("\nVECTOR 3:\n");
    for(iterador=0; iterador<4; iterador++){
        vector3[iterador] = vector1[iterador] + vector2[iterador];
        printf("vector3[%d] = %d\n", iterador, vector3[iterador]);
    }

    return 0;
}
