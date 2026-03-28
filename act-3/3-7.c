#include <stdio.h>
#include <stdlib.h>

int main(){

    int vec[8]; // de 0 a 7
    int iterador;
    int decimal = 0;
    int potencia = 1;

    printf("\nEscribe un digito binario (0 o 1) en cada posicion del siguiente vector de \nlongitud 8 para convertir el numero binario en decimal\n\n");

    for(iterador = 0; iterador < 8; iterador++){ // iterará desde 0 hasta 7 (inclusive) para leer los valores binarios ingresados por el usuario
        printf(" -> ");
        scanf("%d", &vec[iterador]);
    }

    printf("\nVECTOR EN BINARIO = %d%d%d%d%d%d%d%d \n", vec[0],vec[1],vec[2],vec[3],vec[4],vec[5],vec[6],vec[7]);

    for(iterador = 7; iterador >= 0; iterador--){
        decimal += vec[iterador] * potencia;
        potencia *= 2;
    }

    printf("VECTOR EN DECIMAL = %d \n", decimal);

    return 0;}

