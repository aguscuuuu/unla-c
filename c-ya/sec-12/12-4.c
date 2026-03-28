// Cargar un vector de 10 elementos y verificar posteriormente
// si el mismo está ordenado de menor a mayor.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vector[10], iterador, orden;
    printf("\nINGRESE VALORES: \n");
    for(iterador=0; iterador<10; iterador++){
        printf("vector[%d] = ", iterador);
        scanf("%d", &vector[iterador]);
    }
    orden = 1;
    for(iterador=0; iterador<9; iterador++){
        if(vector[iterador+1] < vector[iterador]){
            orden = 0;
        }
    }
    if(orden==1){
        printf("\nEL VECTOR ESTÁ ORDENADO DE MENOR A MAYOR\n");
    }else{
        printf("\nEL VECTOR NO ESTÁ ORDENADO DE MENOR A MAYOR\n")
    }

    return 0;
}
