#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dividendo, divisor, cociente;

    printf("\nEscribe dos numeros enteros para calcular la division de los mismos\n\n");
    printf("Dividendo -> ");
    scanf("%d", &dividendo);
    printf("Divisor -> ");
    scanf("%d", &divisor);

    while(divisor <= dividendo){ // mientras el divisor sea menor o igual que el divididendo...
        dividendo = dividendo - divisor; // ir restando el divisor al dividendo
        cociente = cociente + 1; // ir acumulando la cantidad de veces que se realiza una resta
    }

    printf("\nCociente = %d \n", cociente);
    printf("Resto = %d \n", dividendo);

    return 0;
}
