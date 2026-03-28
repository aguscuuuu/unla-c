// Se debe desarrollar un programa que pida el ingreso del precio de un artículo
// y la cantidad que lleva el cliente. Mostrar lo que debe abonar el comprador.
// Definir una variable float para el precio del artículo.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cantidad;
    float precio;
    printf("\nPRECIO DEL ARTICULO: $");
    scanf("%f", &precio);
    printf("\nCANTIDAD: ");
    scanf("%d", &cantidad);
    printf("\nTOTAL A ABONAR: $%.2f\n", precio*cantidad);
    return 0;
}
