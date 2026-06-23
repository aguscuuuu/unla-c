// Realizar un programa que lea los lados de n triángulos, e informar:
// a) De cada uno de ellos, qué tipo de triángulo es: equilátero (tres lados iguales),
//    isósceles (dos lados iguales), o escaleno (ningún lado igual)
// b) Cantidad de triángulos de cada tipo.
// c) Tipo de triángulo que posee menor cantidad.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cantidad, iterador, a, b, c, cantEquilatero=0, cantIsosceles=0, cantEscaleno=0;

    printf("\nTRIANGULOS A CARGAR: ");
    scanf("%d", &cantidad);

    for(iterador=1; iterador<=cantidad; iterador++){
        printf("\nTRIANGULO %d", iterador);
        printf("\nLADO A: ");
        scanf("%d", &a);
        printf("LADO B: ");
        scanf("%d", &b);
        printf("LADO C: ");
        scanf("%d", &c);
        if(a == b && a == c){
            cantEquilatero++;
            printf("TIPO DE TRIANGULO: EQUILATERO\n");
        }else{
            if(a == b || a == c){
                cantIsosceles++;
                printf("TIPO DE TRIANGULO: ISOSCELES\n");
            }else{
                cantEscaleno++;
                printf("TIPO DE TRIANGULO: ESCALENO\n");
            }
        }
    }
    printf("\n\nCANTIDAD DE TRIANGULOS EQUILATEROS: %d", cantEquilatero);
    printf("\nCANTIDAD DE TRIANGULOS ISOSCELES: %d", cantIsosceles);
    printf("\nCANTIDAD DE TRIANGULOS ESCALENOS: %d", cantEscaleno);
    if(cantEquilatero > cantIsosceles && cantEquilatero > cantEscaleno){
        printf("\nTRIANGULO CON MAYOR CANTIDAD: EQUILATERO");
    }else{
        if(cantIsosceles > cantEquilatero && cantIsosceles > cantEscaleno){
            printf("\nTRIANGULO CON MAYOR CANTIDAD: ISOSCELES");
        }else{
            if(cantEscaleno > cantEquilatero && cantEscaleno > cantIsosceles){
                printf("\nTRIANGULO CON MAYOR CANTIDAD: ESCALENO\n");
            }
        }
    }

    return 0;
}
