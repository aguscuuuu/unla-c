// 3) Realizar un programa que lea cuatro valores numéricos e informar su suma y promedio
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    float promedio;
    printf("\nESCRIBE CUATRO NUMEROS\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    printf("\nLA SUMA DE %d + %d + %d + %d ES %d\n", a, b, c, d, a+b+c+d);
    promedio = (float)(a+b+c+d)/4;
    printf("\nEL PROMEDIO ES %.2f\n", promedio);
    return 0;
}
