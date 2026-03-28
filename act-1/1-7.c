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
       if (iterador%2 == 0){   /// Y solo vamos a mostrar los múltiplos de 2
           printf("%d ", iterador);
       }
    }
    printf("\n");

    return 0;
}

