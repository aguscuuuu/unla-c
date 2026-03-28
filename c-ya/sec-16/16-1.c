// Desarrollar un programa con dos funciones aparte de la main.
// La primer solicite el ingreso de un entero y muestre el cuadrado de dicho valor.
// La segunda que solicite la carga de dos valores y muestre el producto de los mismos.
// Llamar desde la main a ambas funciones.
#include <stdio.h>
#include <stdlib.h>
void cuadrado(){
    int numero;
    printf("\nINGRESE UN VALOR: ");
    scanf("%d", &numero);
    printf("EL CUADRADO DE %d ES %d\n", numero, numero*numero);
}
void producto(){
    int numero1, numero2;
    printf("\nINGRESE DOS VALORES:\n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);
    printf("EL PRODUCTO DE %d * %d ES %d\n", numero1, numero2, numero1*numero2);
}
int main(){
    cuadrado();
    producto();
    return 0;
}
