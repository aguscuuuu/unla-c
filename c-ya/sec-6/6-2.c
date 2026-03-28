// Se ingresan tres notas de un alumno, si el promedio es mayor o igual a siete mostrar un mensaje "Promocionado"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    float promedio;

    printf("\nINGRESE LAS TRES NOTAS DEL ALUMNO:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    promedio = (float)(a+b+c)/3;
    printf("\nPROMEDIO DEL ALUMNO: %.2f\n", promedio);
    if(promedio >= 7){
        printf("\nPROMOCIONADO\n");
    }else{
        printf("\nNO PROMOCIONADO\n");
    }
    return 0;
}
