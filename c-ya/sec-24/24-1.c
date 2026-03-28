// Ingresar el nombre de 5 productos en una matriz de caracteres
// y sus respectivos precios en un vector paralelo de tipo float.
// Mostrar cuantos productos tienen un precio mayor al primer
// producto ingresado (se debe contar)
#include <stdio.h>
#include <stdlib.h>
void cargar(char matriz[5][41], float vector[5]){
    int iterador;
    for(iterador=0; iterador<5; iterador++){
        printf("\nPRODUCTO: ");
        gets(matriz[iterador]);
        printf("PRECIO: $");
        scanf("%f", &vector[iterador]);
        fflush(stdin);
    }
}
int mayores(char matriz[5][41], float vector[5]){
    int iterador, cantMayores=0;
    for(iterador=0; iterador<5; iterador++){
        if(vector[iterador] > vector[0]){
            cantMayores++;
        }
    }
    return cantMayores;
}
int main(){

    char productos[5][41];
    float precios[5];
    int cantMayores;

    printf("\nDESCRIBE LOS SIGUIENTES PRODUCTOS: \n");
    cargar(productos, precios);

    cantMayores = mayores(productos, precios);
    printf("\nCANTIDAD DE PRODUCTOS MAS CAROS QUE $%.2f: %d\n", precios[0],cantMayores);

    return 0;
}
