// Escribir un programa que pida ingresar la coordenada de un punto en el plano,
// es decir dos valores enteros x e y (distintos a cero).
// Posteriormente imprimir en pantalla en que cuadrante se ubica dicho punto.
// (1º Cuadrante si x > 0 Y y > 0 , 2º Cuadrante: x < 0 Y y > 0, etc.)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("\nESCRIBA UNA COORDENADA DE UN PUNTO EN EL PLANO:\n");
    printf("X: ");
    scanf("%d", &x);
    printf("Y: ");
    scanf("%d", &y);

    if(x>0 && y>0){
        printf("\nLA COORDENADA (%d; %d) PERTENECE AL CUADRANTE 1\n", x, y);
    }else{
        if(x<0 && y>0){
            printf("\nLA COORDENADA (%d, %d) PERTENECE AL CUADRANTE 2\n", x, y);
        }
    }

    return 0;
}
