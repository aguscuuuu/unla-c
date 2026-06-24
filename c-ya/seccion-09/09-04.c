// Realizar un programa que imprima 25 términos de la serie 11 - 22 - 33 - 44, etc.
// (No se ingresan valores por teclado)
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cantidad, iterador=0, numero=0;
    printf("\nCANTIDAD DE NUMEROS DE LA SERIE A GENERAR: ");
    scanf("%d", &cantidad);

    while(iterador<cantidad){

        numero = numero + 11;
        printf("\n%d", numero);

        iterador++;
    }
    printf("\n");

    return 0;
}
