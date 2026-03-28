// Se tiene la siguiente declaración de registro:
// struct pais {
//     char nombre[40];
//     int cantidadhab;
// };
// Definir tres variables de tipo país y almacenar los nombres de los países y la cantidad de habitantes de dichos países.
// Mostrar seguidamente el nombre del país con mayor cantidad de habitantes (considerar que los tres países tienen cantidades distintas)
#include <stdio.h>
#include <stdlib.h>
struct pais {
    char nombre[40];
    int cantidadhab;
};

int main(){

    struct pais pais1;
    struct pais pais2;
    struct pais pais3;

    printf("\nNOMBRE DEL PAIS 1: ");
    gets(pais1.nombre);
    printf("CANTIDAD DE HABITANTES: ");
    scanf("%d", &pais1.cantidadhab);
    fflush(stdin);

    printf("\nNOMBRE DEL PAIS 2: ");
    gets(pais2.nombre);
    printf("CANTIDAD DE HABITANTES: ");
    scanf("%d", &pais2.cantidadhab);
    fflush(stdin);

    printf("\nNOMBRE DEL PAIS 3: ");
    gets(pais3.nombre);
    printf("CANTIDAD DE HABITANTES: ");
    scanf("%d", &pais3.cantidadhab);
    fflush(stdin);

    if(pais1.cantidadhab > pais2.cantidadhab && pais1.cantidadhab > pais3.cantidadhab){
        printf("\nEL PAIS %s TIENE MAS CANTIDAD DE HABITANTES: %d", pais1.nombre, pais1.cantidadhab);
    }else{
        if(pais2.cantidadhab > pais1.cantidadhab && pais2.cantidadhab > pais3.cantidadhab){
            printf("\nEL PAIS %s TIENE MAS CANTIDAD DE HABITANTES: %d", pais2.nombre, pais2.cantidadhab);
        }else{
            if(pais3.cantidadhab > pais1.cantidadhab && pais3.cantidadhab > pais2.cantidadhab){
                printf("\nEL PAIS %s TIENE MAS CANTIDAD DE HABITANTES: %d", pais3.nombre, pais3.cantidadhab);
            }
        }
    }

    return 0;
}
