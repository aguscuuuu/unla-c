// Confeccionar un programa que permita administrar un vector de 5 enteros.
// Mostrar un menú de opciones:
// 1 - Cargar el vector.
// 2 - Mostrarlo
// 3 - Imprimir el mayor
// 4 - Imprimir el menor
// 5 - Finalizar el programa
// Utilizar un switch para la selección de la opción y la llamada a la función respectiva.
#include <stdio.h>
#include <stdlib.h>
void cargarVector(int vector[5]){
    printf("CARGAR VECTOR\n");
    int iterador;
    for(iterador=0; iterador<5; iterador++){
        printf("vec[%d] = ", iterador);
        scanf("%d", &vector[iterador]);
    }
}
void mostrarVector(int vector[5]){
    printf("MOSTRAR VECTOR\n");
    int iterador;
    for(iterador=0; iterador<5; iterador++){
        printf("vec[%d] = %d\n", iterador, vector[iterador]);
    }
}
void mostrarMayor(int vector[5]){
    int iterador;
    int mayor=vector[0];
    for(iterador=1; iterador<5; iterador++){
        if(vector[iterador] > mayor){
            mayor = vector[iterador];
        }
    }
    printf("MAYOR NUMERO: %d\n", mayor);
}
void mostrarMenor(int vector[5]){
    int iterador;
    int menor=vector[0];
    for(iterador=1; iterador<5; iterador++){
        if(vector[iterador] < menor){
            menor = vector[iterador];
        }
    }
    printf("MENOR NUMERO: %d\n", menor);
}
int main(){

    int vector[5], opcion;

    printf("\n-------------- MENU -------------");
        printf("\n1) CARGAR VECTOR");
        printf("\n2) MOSTRAR VECTOR");
        printf("\n3) MOSTRAR MAYOR NUMERO");
        printf("\n4) MOSTRAR MENOR NUMERO");
        printf("\n0) FINALIZAR EL PROGRAMA\n");

    do{
        printf("\nOPCION: ");
        scanf("%d", &opcion);
        printf("\n");

        switch (opcion){
            case 1:
                cargarVector(vector);
                break;
            case 2:
                mostrarVector(vector);
                break;
            case 3:
                mostrarMayor(vector);
                break;
            case 4:
                mostrarMenor(vector);
                break;
            case 0:
                break;
        }
    }while(opcion!=0);

    return 0;
}
