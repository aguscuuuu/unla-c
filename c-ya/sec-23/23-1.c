// Confeccionar un programa que permita:
// 1- Almacenar en una matriz los datos de 5 personas.
// 2- Imprimir el nombre alfabéticamente menor.
#include <stdio.h>
#include <stdlib.h>
void cargarMatriz(char matriz[5][41]){
    int iterador;
    for(iterador=0; iterador<5; iterador++){
        printf("NOMBRE %d: ", iterador+1);
        gets(matriz[iterador]);
    }
}
void imprimirMatriz(char matriz[5][41]){
    int iterador;
    for(iterador=0; iterador<5; iterador++){
        printf("%s\n", matriz[iterador]);
    }
}
void menor(char matriz[5][41]){
    int iterador;
    char men[41];
    strcpy(men, matriz[0]);
    for(iterador=1; iterador<5; iterador++){
        if(strcmp(matriz[iterador],men) < 0 ){
            strcpy(men,matriz[iterador]);
        }
    }
    printf("\nEL NOMBRE MAS CHICO ALFABETICAMENTE ES %s\n", men);
}
int main(){
    char nombres[5][41];
    printf("\nCARGUE LA SIGUIENTE MATRIZ\n");
    cargarMatriz(nombres);
    printf("\nLISTA DE NOMBRES:\n");
    imprimirMatriz(nombres);
    menor(nombres);
    return 0;
}
