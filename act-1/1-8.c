#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Ingrese un numero entero -> ");
    scanf("%d", &a);
    printf("Ingrese otro numero entero -> ");
    scanf("%d", &b);
    printf("\n");

    if(a&2 != 0){   /// Si el primer número no es par (es impar) entonces...
        printf("%d es impar, por lo tanto: %d + %d = %d \n",a, a, b, a + b);
    }
    else{
        printf("%d es par, por lo tanto: %d - %d = %d \n",a, a, b, a - b);
    }

    return 0;
}
