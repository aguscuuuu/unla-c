/*
    Realizar un programa en C que calcule el elemento n de la Sucesión de Fibonacci. Recordamos que:
    fib(0)=0 , fib(1)=1 , fib(n) = fib(n-1) + fib(n-2)
    El número n debe ser solicitado al usuario con el mensaje:
    Ingrese un número entero mayor o igual que cero.

    Si por ejemplo recibió 5, mostrará por pantalla el texto:
    fib(5)=5
    Si por ejemplo recibió 0, mostrará por pantalla el texto:
    fib(0)=0
    Si por ejemplo recibió 1, mostrará por pantalla el texto:
    fib(1)=1
    Si recibió un número menor que cero, deberá mostrar por pantalla el texto:
    Error: la Sucesión de Fibonacci no está definida para números menores que cero.

    Recordando los primeros números de la Sucesión:

    Número:     0   1   1   2   3   5   8 ...
    Posición:   0   1   2   3   4   5   6 ...
    --------------------------------------------------------------------------------------------------------
*/

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
