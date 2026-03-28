#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// creamos una función que nos dice si dos números son múltiplos entre sí o no
bool esMultiploDe(int a, int b){
    return (a % b == 0 || b % a == 0); // retorna 1 verdadero o 0 falso automáticamente
}

int main(){
    int a, b;

    printf("\nEscribe dos numeros enteros para saber si son multiplos entre si o no \n-> ");
    scanf("%d", &a);
    printf("-> ");
    scanf("%d", &b);

    if(esMultiploDe(a, b)){ // si la función retorna 1
        printf("\ntrue\n"); // es verdadero
    }else{ // en cambio, si la función retorna 0
        printf("\nfalse\n"); // es falso
    }

    return 0;}
