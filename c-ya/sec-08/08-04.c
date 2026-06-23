// Se ingresan por teclado tres números, si al menos uno de los valores
// ingresados es menor a 10, imprimir en pantalla la leyenda "Alguno de los números es menor a diez".

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("\nINGRESE TRES VALORES:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a<10 || b<10 || c<10){
        printf("\nAL MENOS UNO DE LOS TRES VALORES ES MENOR A 10\n");
    }else{
        printf("\nNINGUN VALOR ES MENOR A 10\n");
    }

    return 0;
}
