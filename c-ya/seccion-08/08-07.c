// Escribir un programa en el cual: dada una lista de tres valores numéricos
// distintos se calcule e informe su rango de variación (debe mostrar el mayor
// y el menor de ellos)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, mayor, menor;
    printf("\nESCRIBE TRES VALORES:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a>b && a>c){
        mayor = a;
    }else{
        if(b>a && b>c){
            mayor = b;
        }else{
            if(c>a && c>b){
                mayor = c;
            }
        }
    }
    if(a<b && a<c){
        menor = a;
    }else{
        if(b<a && b<c){
            menor = b;
        }else{
            if(c<a && c<b){
                menor = c;
            }
        }
    }
    printf("\nEL RANGO DE VARIACION VA DESDE DESDE EL %d HASTA EL %d\n", menor, mayor);

    return 0;
}
