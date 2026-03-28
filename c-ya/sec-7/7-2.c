// Se ingresa por teclado un valor entero, mostrar una leyenda que indique si el
// número es positivo, negativo o nulo (es decir cero)
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numero;
    printf("\nINGRESAR UN VALOR ENTERO\n");
    scanf("%d", &numero);
    if(numero>0){
        printf("\nEL NUMERO ES POSITIVO\n");
    }else if(numero<0){
        printf("\nEL NUMERO ES NEGATIVO\n");
    }else if(numero == 0){
        printf("\nEL NUMERO ES NULO\n");
    }

    return 0;
}
