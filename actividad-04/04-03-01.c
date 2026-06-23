/*
    Resuelve el problema utilizando funciones.
    Realizar un programa en C que pida dos números al usuario y calcule la división de ambos por medio del
    método de restas sucesivas. Para ello, restamos el divisor del dividendo sucesivamente hasta que
    dividendo<divisor. Cuando se alcance esta condición, la cantidad de restas efectuadas será el cociente
    y lo que queda del dividendo será el resto de la división.
    --------------------------------------------------------------------------------------------------------
*/

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
