/*
    Realizar una función
    void invertirString(char *string)
    que invierta el string recibido, utilizando notación de punteros.
    --------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>

void invertirString(char *string){
    int longitud = strlen(string);
    for(int iterador = 0; iterador < longitud / 2; iterador++){
        char temp = string[iterador];
        string[iterador] = string[longitud - iterador - 1];
        string[longitud - iterador - 1] = temp;
    }
}

int main(){
    char string[100];

    printf("Ingrese un string: ");
    scanf("%99[^\n]", string);

    printf("String original:  %s\n", string);
    invertirString(string);
    printf("String invertido: %s\n", string);

    return 0;
}
