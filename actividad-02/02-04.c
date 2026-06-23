/*
    Realizar un programa en C para calcular el factorial de un número, sabiendo que
    n! = n*(n-1)*(n-2)...*2*1 y además 0! = 1.
    Así, 5! = 5*4*3*2*1 = 120. El número debe ser solicitado al usuario con el mensaje:
    Ingrese un número entero mayor o igual que cero.
    Si recibió 5, mostrará por pantalla el texto:
    5! = 120
    Si recibió 0, mostrará por pantalla el texto:
    0! = 1
    Si recibió un número menor que cero, deberá mostrar la leyenda:
    Error: el factorial no está definido para números menores que cero.
    --------------------------------------------------------------------------------------------------------
*/

include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, iterador, resultado=1;

    printf("Ingrese un numero entero mayor que cero para saber su factorial \n\n");
    printf("Numero -> ");
    scanf("%d", &numero);

    if(numero >= 0){ // si el numero es 0 o mayor que 0...
        for(iterador = 1 ; iterador <= numero; iterador++){ // tiene que ir desde 1 hasta el numero
            resultado = resultado * iterador; // e ir multiplicando los iteradores
        }
        printf("\n%d! = %d \n", numero, resultado);
    }
    else{ // si el numero es negativo...
        printf("\nError: el factorial no esta definido para numeros menores que cero\n");
    }

    return 0;
}

