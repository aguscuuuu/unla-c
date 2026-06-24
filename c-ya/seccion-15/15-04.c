// Cargar tres nombres por teclado. Generar un cuarto string que almacene
// los tres nombres ingresados por teclado en orden alfabético separados por una coma.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char nombre1[31], nombre2[31], nombre3[31], temp[31], string[91];

    printf("\nNOMBRE 1: ");
    gets(nombre1);
    printf("NOMBRE 2: ");
    gets(nombre2);
    printf("NOMBRE 3: ");
    gets(nombre3);

    // se intercambian los valores de los strings
    if (strcmp(nombre1, nombre2) > 0) {
        strcpy(temp, nombre1);
        strcpy(nombre1, nombre2);
        strcpy(nombre2, temp);
    }
    if (strcmp(nombre1, nombre3) > 0) {
        strcpy(temp, nombre1);
        strcpy(nombre1, nombre3);
        strcpy(nombre3, temp);
    }
    if (strcmp(nombre2, nombre3) > 0) {
        strcpy(temp, nombre2);
        strcpy(nombre2, nombre3);
        strcpy(nombre3, temp);
    }

    // se arma el string final
    strcpy(string, nombre1);
    strcat(string, ", ");
    strcat(string, nombre2);
    strcat(string, ", ");
    strcat(string, nombre3);

    printf("\nORDENADOS ALFABETICAMENTE:\n");
    printf("%s\n", string);

    return 0;
}
