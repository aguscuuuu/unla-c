// Realizar un programa que acumule (sume) valores ingresados por teclado hasta ingresar el
// 9999 (no sumar dicho valor, indica que ha finalizado la carga). Imprimir el valor acumulado
// e informar si dicho valor es cero, mayor a cero o menor a cero.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero, suma;
    printf("\nINGRESE VALORES:\n");
    scanf("%d", &numero);

    do{
        if(numero != 9999){
            suma = suma + numero;
            scanf("%d", &numero);
        }
    }while(numero != 9999);

    printf("\nLA SUMA DE LOS VALORES ES: %d", suma);
    if(suma==0){
        printf("\nLA SUMA DE LOS VALORES ES IGUAL A CERO\n");
    }else{
        if(suma>0){
            printf("\nLA SUMA DE LOS VALORES ES MAYOR QUE CERO\n");
        }else{
            printf("\nLA SUMA DE LOS VALORES ES MENOR QUE CERO\n");
        }
    }

    return 0;
}
