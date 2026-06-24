// Ingresar por teclado dos números enteros. Si los valores
// son iguales sumarlos, sino multiplicarlos. Emplear el operador
// condicional ?: para guardar en una variable el resultado.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int a, b, resultado;
    printf("\nNUMERO 1: ");
    scanf("%d", &a);
    printf("NUMERO 2: ");
    scanf("%d", &b);

    resultado = (a==b) ? (a+b) : (a*b);

    printf("\nRESULTADO: %d\n", resultado);

    return 0;
}
