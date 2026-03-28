#include <stdio.h>
#include <stdbool.h>

// creamos una función que identifique si dos números son múltiplos entre sí
bool esMultiploDe(int a, int b) {
    return (a % b == 0 || b % a == 0);
}

// creamos una función que identifica si un número es par o no
bool esPar(int num){
    // llamamos a la función anterior y le damos como parámetro el número del usuario y el 2
    return esMultiploDe(num, 2);
}

int main() {
    int num;
    printf("\nIngrese un numero entero\n-> ");
    scanf("%d", &num);

    if (esPar(num)) {
        printf("\n%d es un numero par\n", num);
    } else {
        printf("\n%d no es un numero par\n", num);
    }

    return 0;
}
