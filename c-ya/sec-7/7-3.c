// Confeccionar un programa que permita cargar un número entero positivo de hasta tres cifras y muestre un mensaje
// indicando si tiene 1, 2, o 3 cifras. Mostrar un mensaje de error si el número de cifras es mayor.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    printf("\nINGRESE UN NUMERO ENTERO POSITIVO DE HASTA TRES CIFRAS\n");
    scanf("%d", &numero);

    if(numero < 0 || numero >= 1000) {
        printf("\nEL NUMERO NO CUMPLE CON LAS CONDICIONES\nVOLVER A EJECUTAR\n");
        return 1;
    } else {
        if(numero >= 0 && numero < 10) {
            printf("\nEL NUMERO TIENE UNA CIFRA\n");
        }
        if(numero >= 10 && numero < 100) {
           printf("\nEL NUMERO TIENE DOS CIFRAS\n");
        }
        if(numero >= 100 && numero < 1000) {
            printf("\nEL NUMERO TIENE TRES CIFRAS\n");
        }
    }

    return 0;
}
