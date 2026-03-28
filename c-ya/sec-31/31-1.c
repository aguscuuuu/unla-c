// Se tienen las siguientes declaraciones de registros:
// struct punto {
//     int x;
//     int y;
// };
//
// struct triangulo {
//     struct punto punto1;
//     struct punto punto2;
//     struct punto punto3;
// };
// Definir en la main un registro de tipo triangulo.
// Codificar las funciones:
// 1-Una función que retorne un registro de tipo triangulo.
// 2-Impresión del registro.
#include <stdio.h>
#include <stdlib.h>
struct punto {
     int x;
     int y;
};
struct triangulo {
     struct punto punto1, punto2, punto3;
};
struct triangulo cargar(){
    struct triangulo t;
        t.punto1.x = 10;
        t.punto1.y = 34;
        t.punto2.x = 100;
        t.punto2.y = 23;
        t.punto3.x = 10;
        t.punto3.y = 78;
        return t;
}
void imprimir(struct triangulo t){
    printf("\nCOORDENADAS DE LOS VERTICES DEL TRIANGULO");
    printf("\n\nPUNTO 1");
    printf("\nX = %d\nY = %d",t.punto1.x,t.punto1.y);
    printf("\n\nPUNTO 2");
    printf("\nX = %d\nY = %d",t.punto2.x,t.punto2.y);
    printf("\n\nPUNTO 3");
    printf("\nX = %d\nY = %d\n",t.punto3.x,t.punto3.y);
}
int main(){

    struct triangulo triangulo1;
    triangulo1 = cargar();
    imprimir(triangulo1);

    return 0;
}
