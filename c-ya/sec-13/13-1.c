// Confeccionar un programa que solicite la carga de dos valores enteros
// por teclado. Luego solicitar que se cargue alguno de los caracteres: '+', '-',
// '*' o '/'. Según el caracter ingresado proceder a mostrar la sumar, resta,
// multiplicación o división de los valores ingresados.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    char operacion;

    printf("\nVALOR 1: ");
    scanf("%d", &a);

    printf("VALOR 2: ");
    scanf("%d", &b);

    printf("OPERACION (+,-,*,/): ");
    scanf(" %c", &operacion);

    if(operacion == '+'){
        printf("\n%d + %d = %d\n", a, b, a+b);
    }else{
        if(operacion == '-'){
            printf("\n%d - %d = %d\n", a, b, a-b);
        }else{
            if(operacion == '*'){
                printf("\n%d * %d = %d\n", a, b, a*b);
            }else{
                if(operacion == '/'){
                    printf("\n%d / %d = %.2f\n", a, b, (float)a/b);
                }
            }
        }
    }

    return 0;
}
