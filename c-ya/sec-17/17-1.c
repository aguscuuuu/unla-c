// Confeccionar una función que reciba tres enteros y
// nos muestre el mayor de ellos. La carga de los valores
// hacerlo por teclado en la función main.
#include <stdio.h>
#include <stdlib.h>
void mayor(int numero1, int numero2, int numero3){
    int mayor;
    if(numero1>numero2 && numero1>numero3){
        mayor = numero1;
    }else{
        if(numero2>numero1 && numero2>numero3){
            mayor = numero2;
        }else{
            if(numero3>numero1 && numero3>numero2){
                mayor = numero3;
            }
        }
    }
    printf("\n%d\n", mayor);
}

int main()
{
    int numero1, numero2, numero3;
    printf("\nESCRIBA TRES NUMEROS:\n");
    scanf("%d",&numero1);
    scanf("%d",&numero2);
    scanf("%d",&numero3);

    mayor(numero1, numero2, numero3);

    return 0;
}
