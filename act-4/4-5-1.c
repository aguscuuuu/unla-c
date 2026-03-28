#include <stdio.h>
#include <stdlib.h>

int factorialDeN(int n){
    int iterador;
    int resultado = 1;

    for(iterador = 1; iterador <= n; iterador++){ // va desde 1 hasta el numero
        resultado = resultado * iterador; // almacena la multiplicación a medida que itera en 'resultado'
    }
    return resultado;
}

int main(){

    int n, resultado;

    printf("\nEscriba un numero para saber el resultado de su factorial \n-> ");
    scanf("%d", &n);

    resultado = factorialDeN(n);

    printf("\n%d! = %d\n", n, resultado);

    return 0;}
