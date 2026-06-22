/*
    Escriba un programa en C para que, dados dos números que el usuario ingresa por teclado,
    imprima la suma, la resta, la multiplicación y la división de los mismos.
    --------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;

    printf("Escribe un entero \n");
    scanf("%f", &a);
    printf("Escribe otro entero \n");
    scanf("%f", &b);
    printf("\n");

    printf("%0.f + %0.f = %0.f \n", a, b, a+b);
    printf("%0.f - %0.f = %0.f \n", a, b, a-b);
    printf("%0.f * %0.f = %0.f \n", a, b, a*b);
    printf("%0.f / %0.f = %f \n", a, b, a/b);

    return 0;
}
