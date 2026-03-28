// Se cuenta con la siguiente información:
// Las edades de 5 estudiantes del turno mañana.
// Las edades de 6 estudiantes del turno tarde.
// Las edades de 11 estudiantes del turno noche.
// Las edades de cada estudiante deben ingresarse por teclado.
// a) Obtener el promedio de las edades de cada turno (tres promedios)
// b) Imprimir dichos promedios (promedio de cada turno)
// c) Mostrar por pantalla un mensaje que indique cual de los tres turnos tiene un promedio de edades menor.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iterador, edad, acumulador=0;
    float promedioM=0, promedioT=0, promedioN=0, menorPromedio;
    printf("\nINGRESAR LAS EDADES DE LOS ESTUDIANTES\n");

    printf("\nTURNO MAÑANA:\n");
    for(iterador=0; iterador<5; iterador++){
        scanf("%d", &edad);
        acumulador = acumulador + edad;
        promedioM = (float)acumulador / 5;
    }

    acumulador = 0;
    printf("\nTURNO TARDE:\n");
    for(iterador=0; iterador<6; iterador++){
        scanf("%d", &edad);
        acumulador = acumulador + edad;
        promedioT = (float)acumulador / 6;
    }

    acumulador = 0;
    printf("\nTURNO NOCHE:\n");
    for(iterador=0; iterador<11; iterador++){
        scanf("%d", &edad);
        acumulador = acumulador + edad;
        promedioN = (float)acumulador / 11;
    }

    printf("\nPROMEDIOS:\n");
    printf("TURNO MAÑANA: %.2f\n", promedioM);
    printf("TURNO TARDE: %.2f\n", promedioT);
    printf("TURNO NOCHE: %.2f\n", promedioN);

    if(promedioM < promedioT && promedioM < promedioN){
        printf("\nEL TURNO CON UN PROMEDIO DE EDAD MENOR ES EL TURNO MAÑANA\n");
    }else{
        if(promedioT < promedioM && promedioT < promedioN){
            printf("\nEL TURNO CON UN PROMEDIO DE EDAD MENOR ES EL TURNO TARDE\n");
        }else{
            if(promedioN < promedioM && promedioN < promedioT){
                printf("\nEL TURNO CON UN PROMEDIO DE EDAD MENOR ES EL TURNO NOCHE\n");
            }
        }
    }

    return 0;
}
