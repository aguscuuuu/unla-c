// Realizar un programa que solicite la carga de la edad y sexo de dos personas.
// Luego mostrar la edad y sexo de la persona mayor. Para almacenar el sexo definir
// variables de tipo char donde se almacenará el caracter 'm' o 'f' indicando si es del
// sexo masculino o femenino
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int edadA, edadB;
    char sexoA, sexoB;
    printf("\nPERSONA A\n");
    printf("EDAD: ");
    scanf("%d", &edadA);
    printf("SEXO (M/F): ");
    scanf(" %c", &sexoA);

    printf("\nPERSONA B\n");
    printf("EDAD: ");
    scanf("%d", &edadB);
    printf("SEXO (M/F): ");
    scanf(" %c", &sexoB);

    if(edadA > edadB){
        printf("\nPERSONA MAS GRANDE: A (%c - %d)\n", sexoA, edadA);
    }else{
        printf("\nPERSONA MAS GRANDE: B (%c - %d)\n", sexoB, edadB);
    }

    return 0;
}
