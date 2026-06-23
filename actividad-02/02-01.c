/*
    Realizar un programa en C que reciba dos números enteros mayores que cero por teclado y devuelva la suma
    de los números impares que se encuentren entre ambos. Si, por ejemplo, se hubieran ingresado el 1 y el 10,
    calculará la suma de 1+3+5+7+9 = 25 y devolverá el texto:
    La suma de los impares entre 1 y 10 es 25.
    Si alguno de los números ingresados es menor que cero, debe mostrar el mensaje:
    Error: los números ingresados deben ser mayores que cero.
    --------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, resultado;

    printf("Escribe dos numeros enteros mayores que 0 \n\n");
    printf("Primer numero -> ");
    scanf("%d", &a);
    printf("Segundo numero (mas grande que el primero) -> ");
    scanf("%d", &b);
    printf("\n");

    if(a>0 && b>0){ // Si A y B son mayores que 0...
        if (b > a){ // Si el segundo numero ingresado (B) es mas grande que el primero (A)...
            for(int iterador = a ; iterador <= b ; iterador++){ // Iteramos desde A hasta B (suponiendo que B > A)
                if(iterador&2 != 0){ // Chequeamos que cada numero que se vaya iterando NO sea par, es decir, contar impares
                    resultado = resultado + iterador; // Y vamos juntando la suma de esos numeros en esta variable
                }
            }
        printf("La suma de los impares entre %d y %d da %d", a, b, resultado);
        }
        else{ // Si el segundo numero ingresado (B) no es mas grande que el primero (A)...
            printf("ERROR: El segundo numero ingresado tiene que ser mas grande que el primero");
        }
    }
    else{ // Si A y B no son mayores que 0...
        printf("ERROR: Ambos numeros ingresados deben ser mayores que cero");
    }
    printf("\n");

    return 0;
}
