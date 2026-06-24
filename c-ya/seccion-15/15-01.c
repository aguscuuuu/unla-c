// Confeccionar un programa que pida ingresar el nombre de usuario y
// clave en dos string. Mostrar un mensaje "Correcto" si se ingresa
// como clave la cadena "abc123".
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char usuario[31];
    char clave[31];

    printf("\nINGRESE EL USUARIO: ");
    gets(usuario);
    printf("INGRESE LA CLAVE: ");
    gets(clave);

    if(strcmp(clave, "abc123") == 0){
        printf("\nCORRECTO\n");
    }else{
        printf("\nINCORRECTO\n");
    }

    return 0;
}
