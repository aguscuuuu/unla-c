// Permitir el ingreso de una palabra en minúsculas por teclado.
// Cambiar todas las vocales por un caracter de guión: '-'.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char palabra[11];
    int iterador;
    printf("\nESCRIBE UNA PALABRA EN MINUSCULAS PARA VER EL CAMBIO: ");
    gets(palabra);
    for(iterador=0; iterador<11; iterador++){
        if(palabra[iterador] == 'a' || palabra[iterador] == 'e' || palabra[iterador] == 'i' || palabra[iterador] == 'o' || palabra[iterador] == 'u'){
            palabra[iterador] = '-';
        }
    }
    printf("\n%s\n", palabra);
    return 0;
}
