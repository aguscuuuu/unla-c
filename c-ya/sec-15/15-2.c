// Ingresar por teclado dos nombres de personas y luego mostrarlas ordenados alfabéticamente
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char nombre1[31];
    char nombre2[31];

    printf("\nINGRESE UN NOMBRE: ");
    gets(nombre1);
    printf("INGRESE OTRO NOMBRE: ");
    gets(nombre2);

    printf("\nORDENADOS ALFABETICAMENTE:\n");
    if(strcmp(nombre1,nombre2) < 0){
        printf("\n- %s \n- %s\n", nombre1, nombre2);
    }else{
        printf("\n- %s \n- %s\n", nombre2, nombre1);
    }

    return 0;
}
