// Se cargan por teclado tres números distintos. Mostrar por pantalla el mayor de ellos.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int mayor, a, b, c;
    printf("\nINGRESE TRES NUMEROS:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a>b && a>c){
        mayor = a;
    }else if(b>a && b>c){
        mayor = b;
    }else if(c>a && c>b){
        mayor = c;
    }
    printf("\nEL NUMERO MAS GRANDE ES: %d\n", mayor);

    return 0;
}
