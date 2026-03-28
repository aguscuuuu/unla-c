#include <stdio.h>
#include <stdlib.h>

// creamos una función que calcula el producto de dos números mediante sumas sucesivas
int productoConSumaSucesiva(int a, int b){

    int iterador, resultado = 0;

    if (a == 0 || b == 0){ // si alguno de los números es 0...
        return 0; // ... el producto es 0 (n * 0 = 0)
    }

    if(b > 0){ // si el segundo número es positivo...
        for(iterador = 0; iterador < b; iterador++){ // iterar desde 0 hasta el número
            resultado = resultado + a; // ir sumandose a sí mismo y acumulandose en resultado
        }

    }else{ // en cambio, si el segundo número es negativo...
        for(iterador = 0; iterador > b; iterador--){ // iterar desde el número hasta 0
            resultado = resultado - a; // ir restandose a sí mismo y acumulandose en resultado
        }
    }
    return resultado;}

int main(){
    int num1, num2, resultado;

    printf("\nIngrese el primer numero \n-> ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero \n-> ");
    scanf("%d", &num2);


    printf("\n%d x %d = %d\n", num1, num2, productoConSumaSucesiva(num1, num2));

    return 0;}
