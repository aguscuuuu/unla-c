// Realizar un programa que permita cargar dos listas de 15 valores cada una.
// Informar con un mensaje cual de las dos listas tiene un valor acumulado mayor
// (mensajes "Lista 1 mayor", "Lista 2 mayor", "Listas iguales"). Tener en cuenta
// que puede haber dos o más estructuras repetitivas en un algoritmo.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iterador=0, suma1=0, suma2=0, valor;

    printf("\nCARGAR CON VALORES LAS SIGUIENTES LISTAS PARA SABER CUAL ES MAS GRANDE\n");
    printf("\nLISTA 1:\n");
    while(iterador<15){
        scanf("%d", &valor);
        suma1 = suma1 + valor;
        iterador++;
    }

    iterador = 0;
    printf("\nLISTA 2:\n");
    while(iterador<15){
        scanf("%d", &valor);
        suma2 = suma2 + valor;
        iterador++;
    }

    printf("\nLISTA 1: %d", suma1);
    printf("\nLISTA 2: %d", suma2);
    if(suma1 > suma2){
        printf("\n\nLA LISTA 1 ES MAS GRANDE\n");
    }else{
        printf("\n\nLA LISTA 2 ES MAS GRANDE\n");
    }


    return 0;
}
