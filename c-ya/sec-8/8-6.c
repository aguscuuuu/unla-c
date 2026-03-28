// De un operario se conoce su sueldo y los años de antigüedad. Se pide confeccionar un programa que lea los datos de entrada e informe:
// a) Si el sueldo es inferior a 500 y su antigüedad es igual o superior a 10 años, otorgarle un aumento del 20%, mostrar el sueldo a pagar.
// b) Si el sueldo es inferior a 500 pero su antigüedad es menor a 10 años, otorgarle un aumento de 5%.
// c) Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sueldo, antiguedad, aumento;
    printf("\nSUELDO MENSUAL: $");
    scanf("%d", &sueldo);
    printf("ANIOS DE ANTIGUEDAD: ");
    scanf("%d", &antiguedad);

    if(sueldo<500 && antiguedad>=10){
        aumento = (20*sueldo) / 100;
        printf("\nRECIBE UN AUMENTO DEL 20 PORCIENTO");
    }else{
        if(sueldo<500 && antiguedad<10){
            aumento = (5*sueldo) / 100;
            printf("\nRECIBE UN AUMENTO DEL 5 PORCIENTO");
        }else{
            if(sueldo>=500){
                printf("\nSUELDO PERMANECE SIN AUMENTO");
            }
        }
    }
    printf("\nSUELDO ACTUAL: $%d\n", sueldo+aumento);

    return 0;
}
