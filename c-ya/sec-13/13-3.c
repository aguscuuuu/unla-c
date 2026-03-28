// Realizar la carga de valores enteros por teclado y sumarlos. Cada vez que
// se carga un valor pedir al operador que ingrese si quiere cargar otro valor
// ingresando una 's' o 'S' (minúscula o mayúscula)
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int valor, suma=0;
    char seguir='s';

    printf("\nESCRIBA VALORES PARA SUMARLOS:\n");

    while(seguir == 'S' || seguir == 's'){
        printf("\nVALOR: ");
        scanf("%d", &valor);
        suma = suma + valor;
        printf("\nPARA SEGUIR PRESIONE 's' o 'S': ");
        scanf(" %c", &seguir);
    }
    printf("\nLA SUMA DE TODOS LOS VALORES ES %d\n", suma);
    return 0;
}
