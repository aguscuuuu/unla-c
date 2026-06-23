// Desarrollar un programa que permita administrar un vector de 8 elementos tipo entero.
// Se deben codificar las siguientes funciones:
// 1) Carga del vector.
//    void cargar(int vector[8])
// 2) Retornar el valor acumulado de todos los elementos del vector.
//    int sumar(int vector[8])
// 3) Retornar el valor acumulado de los elementos del vector que sean mayores a 36.
//    int sumaMayores36(int vector[8])
// 4) Retornar la cantidad de componentes con valores mayores a 50.
//    int cantidadMayores50(int vector[8])
//    La función main:
// int main(){
//    int vector[8];
//    cargar(vector);
//    printf("valor acumulado de todos los elementos:%i\n", sumar(vector));
//    printf("valor acumulado de los elementos del vector que sean mayores a 36: %i\n", sumaMayores36(vector));
//    printf("cantidad de componentes con valores mayores a 50: %i", cantidadMayores50(vector));
//    getch();
//    return 0;
// }
#include <stdio.h>
#include <stdlib.h>
void cargar(int vector[8]){
   int iterador;
   for(iterador=0; iterador<8; iterador++){
        printf("VALOR %d = ", iterador+1);
        scanf("%d", &vector[iterador]);
   }
}
int sumar(int vector[8]){
    int iterador, suma=0;
    for(iterador=0; iterador<8; iterador++){
        suma = suma + vector[iterador];
    }
    return suma;
}
int sumaMayores36(int vector[8]){
    int iterador, suma=0;
    for(iterador=0; iterador<8; iterador++){
        if(vector[iterador] > 36){
            suma = suma + vector[iterador];
        }
    }
    return suma;
}
int cantidadMayores50(int vector[8]){
    int iterador, cantidad=0;
    for(iterador=0; iterador<8; iterador++){
        if(vector[iterador]>50){
            cantidad++;
        }
    }
    return cantidad;
}
int main(){

    int vector[8];
    printf("\n");
    cargar(vector);

    printf("\nVALOR ACUMULADO DE TODOS LOS ELEMENTOS: %d", sumar(vector));
    printf("\nVALOR ACUMULADO DE LOS ELEMENTOS DEL VECTOR QUE SEAN MAYORES A 36: %d", sumaMayores36(vector));
    printf("\nCANTIDAD DE COMPONENTES CON VALORES MAYORES A 50: %d\n", cantidadMayores50(vector));

    return 0;
}
