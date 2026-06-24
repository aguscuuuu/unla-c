// Se realiza la carga de 10 valores enteros por teclado. Se desea conocer:
// a) La cantidad de valores ingresados negativos.
// b) La cantidad de valores ingresados positivos.
// c) La cantidad de múltiplos de 15.
// d) El valor acumulado de los números ingresados que son pares.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int iterador, numero, cantPos=0, cantNeg=0, cantMult15=0, sumaPares=0;
    printf("\nINGRESE DIEZ VALORES: \n");

    for(iterador=0; iterador<10; iterador++){
        scanf("%d", &numero);
        if(numero >= 0){
            cantPos++;
        }else{
            cantNeg++;
        }
        if(numero % 15 == 0){
            cantMult15++;
        }
        if(numero % 2 == 0){
            sumaPares = sumaPares + numero;
        }
    }
    printf("\nCANTIDAD DE NUMEROS POSITIVOS: %d", cantPos);
    printf("\nCANTIDAD DE NUMEROS NEGATIVOS: %d", cantNeg);
    printf("\nCANTIDAD DE NUMEROS MULTIPLOS DE 15: %d", cantMult15);
    printf("\nSUMA DE NUMEROS PARES: %d\n", sumaPares);

    return 0;
}
