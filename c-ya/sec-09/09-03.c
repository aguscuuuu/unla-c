// En una empresa trabajan n empleados cuyos sueldos oscilan entre $100 y $500, realizar
// un programa que lea los sueldos que cobra cada empleado e informe cuántos empleados cobran
// entre $100 y $300 y cuántos cobran más de $300. Además el programa deberá informar el importe
// que gasta la empresa en sueldos al personal.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cantidad, iterador=0, sueldo, bajos=0, altos=0, suma=0;
    printf("\nCANTIDAD DE EMPLEADOS EN LA EMPRESA: ");
    scanf("%d", &cantidad);

    printf("\nESCRIBIR EL SUELDO DE LOS %d EMPLEADOS:\n", cantidad);
    while(iterador<cantidad){
        scanf("%d", &sueldo);
        if(sueldo<300 && sueldo>=100){
            bajos++;
        }else{
            if(sueldo>=300){
                altos++;
            }
        }
        iterador++;
        suma = suma + sueldo;
    }

    printf("\nEMPLEADOS QUE COBRAN ENTRE $100 Y $300: %d", bajos);
    printf("\nEMPLEADOS QUE COBRAN MAS DE $300: %d", altos);
    printf("\nGASTO TOTAL EN PERSONAL: $%d\n", suma);

    return 0;
}
