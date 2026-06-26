/*
    Crear una función void limpiarBufferTeclado(); que pueda utilizarse para resolver el problema de fin de línea
    almacenado en el buffer del teclado.
    --------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>

void limpiarBufferTeclado(){
    int c;
    while((c = getchar()) != '\n' && c != EOF){}
}

int main(){
    char palabra[50];
    char frase[100];

    printf("Ingrese una palabra: ");
    scanf("%49s", palabra);
    printf("Ingresaste: %s\n", palabra);

    limpiarBufferTeclado();

    printf("Ahora ingrese una frase completa: ");
    scanf("%99[^\n]", frase);
    printf("Frase ingresada: %s\n", frase);

    return 0;
}
