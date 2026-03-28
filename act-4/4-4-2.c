#include <stdio.h>
#include <stdlib.h>
/// sin utilizar la biblioteca <string.h>

// creamos una función para extraer los primeros N caracteres de un string
void primerosNcaracteresString(char stringXD[], int n){
    int iterador;
    for(iterador = 0; iterador < n; iterador++){ // solo iterar desde 0 hasta el valor dado
        printf("%c", stringXD[iterador]); // escribir digito a digito hasta que termine de iterar
    }
}
int main(){

    char stringXD[51];
    int n;

    printf("\nEscriba una sola palabra (lo mas larga posible y sin espacio)\n-> ");
    scanf("%s", stringXD);
    printf("Ahora escriba cuantos primeros caracteres de esa palabra quiere saber\n-> ");
    scanf("%d", &n);

    printf("\nLos %d primeros caracteres de esa palabra son '", n);
    primerosNcaracteresString(stringXD, n);
    printf("'\n");

    return 0;}
