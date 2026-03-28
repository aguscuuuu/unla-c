// Realizar un programa que solicite la carga por teclado de dos números,
// si el primero es mayor al segundo informar su suma y diferencia, en caso
// contrario informar el producto y la división del primero respecto al segundo.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    printf("\nINGRESAR DOS NUMEROS:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    if(a>b){
        printf("\nSUMA: %d + %d = %d\n", a, b, a+b);
        printf("\nDIFERENCIA: %d - %d = %d\n", a, b, a-b);
    }else{
        printf("\nPRODUCTO: %d * %d = %d\n", a, b, a*b);
        printf("\nDIVISION: %d / %d = %.2f\n", a, b, (float)a/b);
    }
    return 0;
}
