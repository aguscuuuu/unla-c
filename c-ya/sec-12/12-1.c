// Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:
// El valor acumulado de todos los elementos del vector.
// El valor acumulado de los elementos del vector que sean mayores a 36.
// Cantidad de valores mayores a 50.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vector[8], iterador, suma=0, suma36=0, cantMay50=0;
    printf("\nINGRESE UN VALOR PARA CADA ELEMENTO DEL VECTOR: \n");
    for(iterador=0; iterador<8; iterador++){
        printf("vec[%d] = ", iterador);
        scanf("%d", &vector[iterador]);
        suma = suma + vector[iterador];
        if(vector[iterador] > 36){
            suma36 = suma36 + vector[iterador];
        }
        if(vector[iterador] > 50){
            cantMay50++;
        }
    }
    printf("\nSUMA DE TODOS LOS VALORES DEL VECTOR: %d", suma);
    printf("\nSUMA DE LOS VALORES DEL VECTOR MAYORES A 36: %d", suma36);
    printf("\nCANTIDAD DE VALORES MAYORES A 50: %d\n", cantMay50);

    return 0;
}
