// Confeccionar un programa que lea n pares de datos, cada par de datos
// corresponde a la medida de la base y la altura de un triángulo. El programa deberá informar:
// a) De cada triángulo la medida de su base, su altura y su superficie.
// b) La cantidad de triángulos cuya superficie es mayor a 12.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int iterador, cantidad, base, altura, superficie, mayores=0;
    printf("\nTRIANGULOS A PROCESAR: ");
    scanf("%d", &cantidad);

    for(iterador=0; iterador<cantidad; iterador++){
        printf("\nBASE: ");
        scanf("%d", &base);
        printf("ALTURA: ");
        scanf("%d", &altura);
        superficie = base * altura / 2;
        printf("SUPERFIFICE: %d\n", superficie);
        if(superficie>12){
            mayores++;
        }
    }
    printf("\nCANTIDAD DE TRIANGULOS CON SUPERFICIE MAYOR A 12: %d\n", mayores);

    return 0;
}
