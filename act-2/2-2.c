#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Ingrese dos numeros enteros mayores que 0 para realizar la division \n\n");
    printf("Primer numero -> ");
    scanf("%d", &a);
    printf("Segundo numero -> ");
    scanf("%d", &b);
    printf("\n");

    if(a>0 && b>0){
        printf("%d/%d: Cociente = %d y Resto = %d \n", a, b, a/b, a % b);
    }
    else{
        printf("ERROR: ambos numeros tienen que ser mayores a 0 \n");
    }

    return 0;
}
