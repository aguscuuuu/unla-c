// Se ingresan tres valores por teclado, si todos son iguales se imprime la suma del
// primero con el segundo y a este resultado se lo multiplica por el tercero
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
    printf("\nINGRESE TRES VALORES:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a == b && b == c){
        printf("\n%d + %d = %d", a, b, a+b);
        printf("\n%d * %d = %d\n", a+b, c, (a+b)*c);
    }

    return 0;
}
