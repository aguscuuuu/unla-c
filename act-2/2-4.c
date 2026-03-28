#include <stdio.h>
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

