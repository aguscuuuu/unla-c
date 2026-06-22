/*
    Escriba un programa en C que, dados dos números enteros ingresados por el usuario, realice
    la suma de los mismos si el primero es impar, y la resta en caso contrario. Sabemos que un
    número es par cuando el resto de la división del mismo por 2 es 0. Por ejemplo, si el usuario
    ingresara los números 3 y 5, la salida del programa debería ser:
    3 es impar: 3+5=8
    --------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Ingrese un numero entero -> ");
    scanf("%d", &a);
    printf("Ingrese otro numero entero -> ");
    scanf("%d", &b);
    printf("\n");

    if(a&2 != 0){   /// Si el primer número no es par (es impar) entonces...
        printf("%d es impar, por lo tanto: %d + %d = %d \n",a, a, b, a + b);
    }
    else{
        printf("%d es par, por lo tanto: %d - %d = %d \n",a, a, b, a - b);
    }

    return 0;
}
