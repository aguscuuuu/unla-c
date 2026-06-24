// Mostrar todos los múltiplos de 8 que hay hasta el valor 500.
// Debe aparecer en pantalla 8 - 16 - 24, etc.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=8;
    printf("\nMULTIPLOS DE 8 HASTA EL 500:\n\n");

    while(numero<500){
        if(numero % 8 == 0){
            printf("%d - ", numero);
        }
        numero++;
    }
    printf("\n");

    return 0;
}
