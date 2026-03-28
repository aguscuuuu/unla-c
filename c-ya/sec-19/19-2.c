// Una empresa tiene dos turnos (mañana y tarde) en los que trabajan 8 empleados (4 por la mañana y 4 por la tarde)
// Confeccionar un programa que permita almacenar los sueldos de los empleados agrupados por turno.
// Imprimir los gastos en sueldos de cada turno.
// Se deben implementar las siguientes funciones:
// void cargar(float sueldos[4])
// ..
// float gastosTurno(float sueldos[4])
// ..
// int main()
// {
//    float sueldosMa[4];
//    float sueldosTar[4];
//    printf("Carga de sueldos del turno manana\n");
//    cargar(sueldosMa);
//    printf("Carga de sueldos del turno tarde\n");
//    cargar(sueldosTar);
//    printf("Gastos del turno de la manana: %0.2f\n", gastosTurno(sueldosMa));
//    printf("Gastos del turno de la tarde: %0.2f", gastosTurno(sueldosTar));
//    return 0;
// }
#include <stdio.h>
#include <stdlib.h>
void cargar(float sueldos[4]){
    int iterador;
    for(iterador=0; iterador<4; iterador++){
        printf("EMPLEADO %d = $", iterador+1);
        scanf("%f", &sueldos[iterador]);
    }
}
float gastosTurno(float sueldos[4]){
    int iterador;
    float suma=0;
    for(iterador=0; iterador<4; iterador++){
        suma = suma + sueldos[iterador];
    }
    return suma;
}
int main(){

    float sueldosMa[4];
    float sueldosTar[4];

    printf("\nSUELDOS DEL TURNO MANANA:\n");
    cargar(sueldosMa);
    printf("\nSUELDOS DEL TURNO TARDE:\n");
    cargar(sueldosTar);

    printf("\nGASTOS DEL TURNO DE LA MANANA: $%0.2f\n", gastosTurno(sueldosMa));
    printf("GASTOS DEL TURNO DE LA TARDE: $%0.2f\n", gastosTurno(sueldosTar));

    return 0;
}
