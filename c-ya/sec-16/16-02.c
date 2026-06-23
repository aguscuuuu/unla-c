// Desarrollar una función que solicite la carga de tres valores y
// muestre el menor. Desde la función main llamar 3 veces a dicha función.
#include <stdio.h>
#include <stdlib.h>
void menor(){
    int numero1, numero2, numero3;
    printf("\nESCRIBA TRES NUMEROS:\n");
    scanf("%d",&numero1);
    scanf("%d",&numero2);
    scanf("%d",&numero3);
    if(numero1<numero2 && numero1<numero3){
        printf("EL NUMERO MAS CHICO ES EL %d\n", numero1);
    }else{
        if(numero2<numero1 && numero2<numero3){
            printf("EL NUMERO MAS CHICO ES EL %d\n", numero2);
        }else{
            if(numero3<numero1 && numero3<numero2){
                printf("EL NUMERO MAS CHICO ES EL %d\n", numero3);
            }
        }
    }
}
int main()
{
    menor();
    menor();
    menor();
    return 0;
}
