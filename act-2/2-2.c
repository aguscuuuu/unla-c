/*
    Realizar un programa en C que reciba dos números enteros positivos y mayores que cero por teclado y calcule
    cociente y resto de la división (usando sólo lo visto hasta ahora). Si el programa recibió 21 y 4, mostrará
    el texto:
    21/4: Cociente=5 y Resto=1
    Si alguno de los números ingresados es menor que cero, debe mostrar el mensaje:
    Error: los números ingresados deben ser mayores que cero.
    --------------------------------------------------------------------------------------------------------
*/

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
