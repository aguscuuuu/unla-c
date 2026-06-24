// Se tiene la siguiente información:
// · Nombres de 4 empleados (matriz de tipo char)
// · Ingresos en concepto de sueldo, cobrado por cada empleado, en los últimos 3 meses (matriz de tipo float)
// Confeccionar el programa para:
// a) Realizar la carga de la información mencionada.
// b) Generar un vector que contenga el ingreso acumulado en sueldos en los últimos 3 meses para cada empleado.
// c) Mostrar por pantalla el total pagado en sueldos a todos los empleados en los últimos 3 meses
// d) Obtener el nombre del empleado que tuvo el mayor ingreso acumulado
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANIO 4

void cargarEmpleado(char nombres[TAMANIO][31], float sueldos[TAMANIO][3]){
    int iterador1, iterador2;
    for(iterador1=0; iterador1<TAMANIO; iterador1++){
        printf("\nNOMBRE: ");
        gets(nombres[iterador1]);
        for(iterador2=0; iterador2<3; iterador2++){
            printf("SUELDO MES %d: $", iterador2+1);
            scanf("%f", &sueldos[iterador1][iterador2]);
            fflush(stdin);
        }
    }
}
void calcularSumaSueldos(float sueldos[TAMANIO][3], float sueldostot[TAMANIO]){
    int iterador1, iterador2;
    float suma;
    for(iterador1=0; iterador1<TAMANIO; iterador1++){
        suma = 0;
        for(iterador2=0; iterador2<3; iterador2++){
            suma = suma + sueldos[iterador1][iterador2];
        }
        sueldostot[iterador1] = suma;
    }
}
void imprimirTotalPagado(char nombres[TAMANIO][31], float sueldos[TAMANIO][3], float sueldostot[TAMANIO]){
    int iterador1, iterador2;
    for(iterador1=0; iterador1<TAMANIO; iterador1++){
        printf("\nEMPLEADO: %s", nombres[iterador1]);
        for(iterador2=0; iterador2<3; iterador2++){
            printf("\nSUELDO MES %d = $%.2f", iterador2+1, sueldos[iterador1][iterador2]);
        }
        printf("\nTOTAL PAGADO: $%.2f\n", sueldostot[iterador1]);
    }
}
void mayorIngreso(char nombres[TAMANIO][31], float sueldostot[TAMANIO]){
    int iterador, indiceMayor=0;
    float mayorSueldo = sueldostot[0];
    for(iterador=1; iterador<TAMANIO; iterador++){
        if(sueldostot[iterador] > mayorSueldo){
            mayorSueldo = sueldostot[iterador];
            indiceMayor = iterador;
        }
    }
    printf("\nEMPLEADO CON MAYOR INGRESO: %s ($%.2f)\n", nombres[indiceMayor], mayorSueldo);
}
int main(){

    char nombres[TAMANIO][31];
    float sueldos[TAMANIO][3];
    float sueldosTotal[TAMANIO];

    printf("\nCARGUE LOS SUELDOS DE LOS EMPLEADOS\n");
    cargarEmpleado(nombres,sueldos);

    calcularSumaSueldos(sueldos,sueldosTotal);

    printf("\nTOTALES PAGADOS POR MES\n");
    imprimirTotalPagado(nombres,sueldos,sueldosTotal);

    mayorIngreso(nombres,sueldosTotal);x

    return 0;
}
