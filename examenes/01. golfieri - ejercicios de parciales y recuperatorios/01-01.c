#include <stdio.h>
#include <stdlib.h>

void imprimirTriangulo(int tamanio, char caracter){

    if(tamanio > 0){
        for(int i=0; i<tamanio; i++){
            for(int j=i; j<tamanio; j++){
                printf("%c", caracter);
            }
            printf("\n");
        }

    }else{
        int tamanio2 = -1;
        for(int i=tamanio; i<0; i++){
            for(int j=tamanio2; j<0; j++){
                printf("%c", caracter);
            }
            printf("\n");
            tamanio2 = tamanio2 - 1;
        }
    }
}

int main(){

    int tamanio;
    char caracter;

    do{
        printf("INGRESE UN NUMERO ENTERO: ");
        scanf("%d", &tamanio);
        if(tamanio==0){
            printf("ERROR: EL NUMERO NO PUEDE SER 0\n\n");
        }
    }while(tamanio==0);
    printf("INGRESE UN CARACTER: ");
    scanf(" %c", &caracter);
    printf("\n");

    imprimirTriangulo(tamanio, caracter);

    return 0;
}
