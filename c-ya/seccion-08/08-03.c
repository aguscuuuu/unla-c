// Se ingresan por teclado tres números, si todos los valores ingresados son menores
// a 10, imprimir en pantalla la leyenda "Todos los números son menores a diez".
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("\nINGRESE TRES NUMEROS:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a<10 && b<10 && c<10){
        printf("\nLOS TRES VALORES SON MENORES A 10\n");
    }else{
        printf("\nNO TODOS LOS VALORES SON MENORES A 10\n");
    }

    return 0;
}
