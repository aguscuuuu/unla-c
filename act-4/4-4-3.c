#include <stdio.h>
#include <stdlib.h>
/// sin utilizar la biblioteca <string.h>

// creamos una función para extraer los primeros N caracteres de un string comenzando desde M
void extraerNprimerosCaracteresDesdeM(char stringXD[], int n, int m){
    int iterador;
    char stringResultado[51];

    for(iterador = 0; iterador < n - m + 1; iterador++){
        stringResultado[iterador] = stringXD[m - 1 + iterador];
    }
    stringResultado[iterador] = '\0';

    printf("\nQuedaria: '%s'\n\n", stringResultado);
}

int main(){
    char stringXD[51];
    int n, m;

    printf("\nEscribe una sola palabra (lo mas larga posible y sin espacios)\n-> ");
    scanf("%s", stringXD);

    printf("\nAhora vas a definir desde que caracter hasta que caracter leer esa palabra\n\n");

    printf("Sabiendo que la primer letra es 1, empieza escribiendo un numero que indique la letra por la cual empezar a leer la palabra\n-> ");
    scanf("%d", &m);

    printf("Y ahora escribe otro numero que indique la letra por la cual terminar de leer la palabra\n-> ");
    scanf("%d", &n);

    extraerNprimerosCaracteresDesdeM(stringXD, n, m);

    return 0;}
