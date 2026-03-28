#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, exponente, iterador, resultado = 1;

    printf("Escriba dos numeros enteros mayores que cero \n\n");
    printf("Primer numero -> ");
    scanf("%d", &base);
    printf("Segundo numero -> ");
    scanf("%d", &exponente);
    printf("\n");

    if(base>0 && exponente>0){ // si ambos numeros son mayores que cero...
        if(exponente >= base){ // si el exponente es mas grande que la base...
            for(iterador = 1; iterador <= exponente; iterador++){ /// ir desde 1 hasta el exponente
                resultado = resultado * base; // multiplicar base por base (el mismo numero todo el tiempo) a medida que se itera
            }
        printf("La potencia entre el primer numero y el segundo (%d^%d) = %d \n", base, exponente, resultado);
        }
        else{ //si la base es mas grande que el exponente
            for(iterador = exponente; iterador >= 1; iterador--){ /// ir desde el exponente hasta 1
                resultado = resultado * base; // multiplicar base por base (el mismo numero todo el tiempo) a medida que se itera
            }
        printf("La potencia entre el primer numero y el segundo (%d^%d) = %d \n", base, exponente, resultado);
        }
    }
    else{
        printf("Error: \nAmbos numeros deben ser mayores que cero \n");
    }

    return 0;
}

