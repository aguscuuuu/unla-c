#include <stdio.h>
#include <stdlib.h>

// creamos una función que calcule la potencia de un número y otro con multiplicaciones sucesivas
double potenciaConMultiplicacionSucesiva(int base, int exponente){

   int iterador;
   double resultado = 1; // si definimos el resultado como 0, al multiplicarse dará todo el tiempo 0 (n . 0 = 0)

   if(exponente >= 0){ // si el exponente es positivo o 0...
        for(iterador = 0; iterador < exponente; iterador++){ // iterar desde 0 hasta ese numero
            resultado = resultado * base; // ir multiplicando la base sucesivamente y almacenarla en 'resultado'
        }
    }
    else{ // en cambio, si el exponente es negativo...
        exponente = -exponente; // cambiar su valor negativo a su valor absoluto (pasarlo a positivo)
        for(iterador = 0; iterador < exponente; iterador++){ // iterar desde 0 hasta ese numero
            resultado = resultado * base; // ir multiplicando la base sucesivamente y almacenarla en 'resultado'
        }
        resultado = 1 / (double)resultado; // se calcula el inverso del resultado para obtener la potencia correcta
    }

    if(resultado == (int)resultado){ // si el resultado es entero...
        return (int)resultado; // devuelvelo como entero
    } else{ // en cambio, si el resultado no es entero...
        return resultado; // devuelvelo como decimal
    }
}
int main(){

    int num1, num2;
    double resultado;

    printf("\nIngrese el primer numero \n-> ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero \n-> ");
    scanf("%d", &num2);

    resultado = potenciaConMultiplicacionSucesiva(num1, num2);

    if(resultado == (int)resultado){ // si el resultado es entero...
        printf("\n%d ^ %d = %d\n", num1, num2, (int)resultado); // muestralo como entero
    } else{ // en cambio, si el resultado no es entero...
        printf("\n%d ^ %d = %.3f\n", num1, num2, resultado); // muestralo como decimal
    }

    return 0;}
