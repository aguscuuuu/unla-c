/*
    Escriba un programa en C que muestre todos los números pares entre dos números ingresados
    por el usuario. Por ejemplo, si el usuario ingresa 12 y 20, el programa deberá dar una
    salida como:
    12 14 16 28 20
    --------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Calcula todos los pares que existen entre dos numeros \n\n");
    printf("Ingresa el primer numero -> ");
    scanf("%d", &a);

    printf("Ingresa el segundo numero (mas grande) -> ");
    scanf("%d", &b);
    printf("\n");

    for(int iterador = a ; iterador <= b ; iterador++){   /// Suponiendo que B > A, vamos a ir de A a B
       if (iterador%2 == 0){   /// Y solo vamos a mostrar los m�ltiplos de 2
            printf("%d ", iterador);
        }
    }
    printf("\n");

    return 0;
}

