// Ingresar una palabra por teclado. Mostrar por pantalla la palabra y
// la cantidad de caracteres que tiene dicha palabra
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char string[50];
    int iterador = 0;
    printf("\nESCRIBE UNA PALABRA: ");
    gets(string);

    while(string[iterador] != '\0'){
        iterador++;
    }

    printf("\nLA PALABRA '%s' TIENE %d LETRAS\n", string, iterador);

    return 0;
}
