// Realizar un programa que pida cargar una fecha cualquiera, luego verificar si dicha fecha corresponde a Navidad.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int dd, mm, aa;
    printf("\nCARGUE UNA FECHA (dd/mm/aaaa)\n");
    printf("\nDIA: ");
    scanf("%d", &dd);
    printf("MES: ");
    scanf("%d", &mm);
    printf("ANIO: ");
    scanf("%d", &aa);

    if(dd==25 && mm==12){
        printf("\nES NAVIDAD\n");
    }else{
        printf("\nNO ES NAVIDAD\n");
    }

    return 0;
}
