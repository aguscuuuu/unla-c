// Se ingresan un conjunto de n alturas de personas por teclado. Mostrar la altura promedio de las personas
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int iterador=1, cantidad, altura, suma=0;
    float promedio;

    printf("\nCUANTAS ALTURAS DESEA CARGAR: ");
    scanf("%d", &cantidad);

    printf("\nINGRESE %d ALTURAS EN CENTIMETROS SIN COMA:\n", cantidad);
    while(iterador<=cantidad){

        scanf("%d", &altura);

        suma = suma + altura;

        iterador++;
    }
    promedio = (float)suma / cantidad;
    printf("\nLA ALTURA PROMEDIO DE LAS PERSONAS ES: %.2f\n", promedio);

    return 0;
}
