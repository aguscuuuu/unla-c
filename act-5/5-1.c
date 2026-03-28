#include <stdio.h>
#include <stdlib.h>

int buscarSecuencia(int vector[], int longitud, int numBuscado){
   for(int iterador = 0 ; iterador < longitud ; iterador++){ // vamos recorriendo el vector
        if(vector[iterador] == numBuscado){ // si el numero buscado se encuentra ahí ...
            return iterador; // devolvemos la posicion
        }
   }
   return -1; // sino devolvemos -1
}
int main(){

    int vec[6]={32, 14, 75, 43, 66, 97};
    int numBuscado;

    printf("\nVector: \n");
    for(int iterador = 0; iterador < 6; iterador++){
        printf("%d ",vec[iterador]);
    }
    printf("\n\nQue numero buscas? \n");
    scanf("%d", &numBuscado);

    int posicion = buscarSecuencia(vec, 6, numBuscado);

    if(posicion != -1){
        printf("\nEl elemento %d se ha encontrado en la posicion %d\n", numBuscado, posicion+1);
    }else{
        printf("\nEl elemento no se ha encontrado dentro del vector\n", numBuscado);
    }

    return 0;
}
