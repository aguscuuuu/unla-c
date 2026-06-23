// Se tiene la siguiente declaración de registro:
// struct punto {
//    int x;
//    int y;
// };
// Definir tres variables de tipo punto y cargarlas llamando a una función
// que retorne valores de tipo punto.
// Finalmente crear otra función que imprima en que cuadrante se encuentra
// cada punto (tener en cuenta que si x>0 e y>0 se encuentra en el primer cuadrante,
// si x<0 e y>0 se encuentra en el segundo cuadrante y así sucesivamente)
#include <stdio.h>
#include <stdlib.h>
struct punto {
    int x;
    int y;
};
struct punto cargar(){
    struct punto p;

    printf("\nX = ");
    scanf("%d",&p.x);
    printf("Y = ");
    scanf("%d",&p.y);

    return p;
}
void definirCuadrante(struct punto p){
    if(p.x > 0 && p.y > 0){
        printf("EL PUNTO SE ENCUENTRA EN EL PRIMER CUADRANTE\n");
    }else{
        if(p.x < 0 && p.y > 0){
            printf("EL PUNTO SE ENCUENTRA EN EL SEGUNDO CUADRANTE\n");
        }else{
            if(p.x < 0 && p.y < 0){
                printf("EL PUNTO SE ENCUENTRA EN EL TERCER CUADRANTE\n");
            }else{
                if(p.x > 0 && p.y < 0){
                    printf("EL PUNTO SE ENCUENTRA EN EL CUARTO CUADRANTE\n");
                }
            }
        }
    }
}
int main(){

    struct punto puntoA, puntoB, puntoC;

    printf("\nPUNTO A");
    puntoA = cargar();
    definirCuadrante(puntoA);

    printf("\nPUNTO B");
    puntoB = cargar();
    definirCuadrante(puntoB);

    printf("\nPUNTO C");
    puntoC = cargar();
    definirCuadrante(puntoC);

    return 0;
}
