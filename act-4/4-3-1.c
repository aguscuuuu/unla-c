#include <stdio.h>
#include <stdlib.h>

int divisionPorRestaSucesiva(int dividendo, int divisor){
    int cociente = 0;
    while(divisor <= dividendo){ // mientras el divisor sea menor o igual que el divididendo...
        dividendo = dividendo - divisor; // ir restando el divisor al dividendo
        cociente = cociente + 1; // ir acumulando la cantidad de veces que se realiza una resta
    }
    return dividendo; // devolver el cociente como resto
}

int main(){

    int dividendo, divisor, cociente, resto;

    printf("\nEscribe dos numeros enteros para calcular la division de los mismos\n\n");
    printf("Dividendo -> ");
    scanf("%d", &dividendo);
    printf("Divisor -> ");
    scanf("%d", &divisor);

    cociente = divisionPorRestaSucesiva(dividendo, divisor);
    resto = dividendo;

    printf("\nCociente = %d \n", cociente);
    printf("Resto = %d \n", resto);

    return 0;}
