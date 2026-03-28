// Elaborar una función que reciba un valor entero y nos muestre
// desde el 1 hasta dicho valor. Si la función recibe un valor negativo
// mostrar un mensaje de error.
#include <stdio.h>
#include <stdlib.h>
void secuencia(int numero){
    int iterador;
    if(numero<0){
        printf("\nERROR\n");
    }else{
        for(iterador = numero; iterador>=1; iterador--){
            printf("%d\n", iterador);
        }
    }

}
int main()
{
    int numero;
    printf("\nINGRESE UN NUMERO POSITIVO: ");
    scanf("%d", &numero);

    secuencia(numero);

    return 0;
}
