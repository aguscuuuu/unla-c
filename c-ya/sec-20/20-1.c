// Cargar un vector de 5 elementos enteros. Imprimir el menor
// y un mensaje si se repite dentro del vector.
#include <stdio.h>
#include <stdlib.h>
void cargarVector(int vector[5]){
    int iterador;
    for(iterador=0; iterador<5; iterador++){
        printf(" vec[%d] = ", iterador);
        scanf("%d", &vector[iterador]);
    }
}
int menorDelVector(int vector[5]){
    int iterador;
    int menor=vector[0];
    for(iterador=0; iterador<5; iterador++){
        if(vector[iterador]<menor){
            menor = vector[iterador];
        }
    }
    return menor;
}
int seRepite(int vector[5], int menor){
    int iterador, cantRepiticion=0;
    for(iterador=0; iterador<5; iterador++){
        if(vector[iterador] == menor){
            cantRepiticion++;
        }
    }
    return cantRepiticion;
}
int main(){
    int vector[5], menor, vecesRepetido;
    printf("\nCARGUE EL SIGUIENTE VECTOR\n");
    cargarVector(vector);
    menor = menorDelVector(vector);
    printf("\nVALOR MAS CHICO DEL VECTOR: %d\n", menor);
    vecesRepetido = seRepite(vector, menor);
    if(vecesRepetido>1){
        printf("\nEL VALOR %d SE REPITE %d VECES\n", menor, vecesRepetido);
    }else{
        printf("\nEL VALOR %d SE REPITE %d VEZ\n", menor, vecesRepetido);
    }
    return 0;
}
