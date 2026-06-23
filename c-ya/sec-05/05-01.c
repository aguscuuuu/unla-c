// 1)Realizar la carga del lado de un cuadrado, mostrar por pantalla el perímetro del mismo
//   (El perímetro de un cuadrado se calcula multiplicando el valor del lado por cuatro)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("\nEL LADO DE UN CUADRADO MIDE: ");
    scanf("%d", &num);
    printf("\nPERIMETRO DEL CUADRADO ES: %d\n", num*4);
    return 0;
}
