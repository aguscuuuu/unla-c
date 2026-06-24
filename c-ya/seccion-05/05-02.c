// Escribir un programa en el cual se ingresen cuatro números, calcular e informar la suma de los dos primeros y el producto del tercero y el cuarto.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c, d;
    printf("\nINGRESAR CUATRO NUMEROS:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    printf("\nLA SUMA DE %d + %d es %d\n", a, b , a+b);
    printf("\nEL PRODUCTO DE %d * %d es %d\n", c, d, c*d);
    return 0;
}
