// Desarrollar un programa que solicite la carga de
// 10 números e imprima la suma de los últimos 5 valores ingresados
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int iterador, numero, suma=0;
    printf("\nESCRIBA DIEZ NUMEROS: \n");

    for(iterador=0; iterador<10; iterador++){
        scanf("%d", &numero);
        if(iterador >= 5){
            suma = suma + numero;
        }
    }
    printf("\nLA SUMA DE LOS ULTIMOS CINCO NUMEROS ES: %d\n", suma);

    return 0;
}
