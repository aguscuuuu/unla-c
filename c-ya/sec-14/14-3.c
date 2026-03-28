// Confeccionar un programa que permita ingresar una palabra y
// luego muestre un mensaje si la misma comienza con la vocal 'A' o 'a'.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char palabra[11];
    printf("\nINGRESE UNA PALABRA\n");
    printf("SOLO SE MOSTRARA SI EMPIEZA CON A o a\n\n");
    gets(palabra);

    if(palabra[0] == 'A' || palabra[0] == 'a'){
        printf("\nLA PALABRA EMPIEZA CON %c\n", palabra[0]);
    }

    return 0;
}
