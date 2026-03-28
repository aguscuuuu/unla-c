// Elaborar una función que reciba tres enteros y
// nos retorne el valor promedio de los mismos
#include <stdio.h>
#include <stdlib.h>
float promedio(int a, int b, int c){
    int suma = a+b+c;
    float promedio = (float)suma / 3;
    return promedio;
}
int main()
{
    int a, b, c;
    float resultado;
    printf("\nESCRIBA TRES NUMEROS: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    resultado = promedio(a,b,c);
    printf("\nEL PROMEDIO DE LOS VALORES ES %.2f\n", resultado);

    return 0;
}
