#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iterador, posicion, fib1, fib2, fibn;

    printf("\nIngrese un numero entero, mayor o igual que cero. El mismo representara una posicion dentro \n");
    printf("de la Sucesion de Fibonacci que luego dara a conocer con que valor de esta asociada\n\n");
    printf("Numero -> ");
    scanf("%d", &posicion);

    fib1 = 0;
    fib2 = 1;

    if(posicion >= 0){ // si el numero ingresado sea mayor o igual a cero...
        if (posicion == 0){ // si la posicion es 0...
            fibn = 0; // el valor dentro de la sucesion es 0 (posicion 0, valor 0)
        } else if (posicion == 1){ // en cambio, si la posicion es 1
            fibn = 1;
        } else { // en cambio, si la posicion no es ni 0 ni 1...
            for (int iterador = 2; iterador <= posicion; iterador++){ // iterar desde 2 hasta la posicion requerida
                fibn = fib1 + fib2;
                fib1 = fib2;
                fib2 = fibn;
            }
        }
        printf("\nFIB(%d) = %d", posicion, fibn);
        printf("\nEs decir, en la posicion %d se encuentra el numero %d \n", posicion, fibn);
    }
    else{ // si el numero ingresado no es mayor o igual a cero...
        printf("\nError: la sucesion de Fibonacci no esta definida para numeros menores que cero\n");
    }

    return 0;
}
