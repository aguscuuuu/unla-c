// Se tiene la siguiente declaración de registro:
// struct libro{
//    int codigo;
//    char titulo[40];
//    char autor[40];
// };
// Definir un vector de cuatro elementos de tipo libro.
// Codificar las funciones:
// 1-Carga del vector.
// 2-Listado completo.
// 3-Ingresar por teclado un nombre de autor y luego mostrar todos los títulos de libros que ha escrito o un mensaje si no tiene.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 struct libro {
    int codigo;
    char titulo[40];
    char autor[40];
};
void cargarLibros(struct libro vec[4]){
    int iterador;
    for(iterador=0; iterador<4; iterador++){
        printf("\nLIBRO %d\n", iterador+1);
        printf("CODIGO: ");
        scanf("%d", &vec[iterador].codigo);
        fflush(stdin);
        printf("TITULO: ");
        gets(vec[iterador].titulo);
        printf("AUTOR: ");
        gets(vec[iterador].autor);
    }
}
void mostrarListado(struct libro vec[4]){
    int iterador;
    for(iterador=0; iterador<4; iterador++){
        printf("\n(%d) %s - %s", vec[iterador].codigo ,vec[iterador].titulo, vec[iterador].autor);
    }
}
void buscarPorAutor(struct libro vec[4]){
    int iterador, cantidad=0;
    char autor[40];
    printf("\n\nINGRESE EL NOMBRE DEL AUTOR A BUSCAR: ");
    gets(autor);
    for(iterador=0; iterador<4; iterador++){
        if(strcmp(autor,vec[iterador].autor) == 0){
            printf("TITULO: %s", vec[iterador].titulo);
            cantidad++;
        }
    }
    if(cantidad==0){
        printf("\nNO EXISTEN LIBROS DE ESTE AUTOR EN LA LISTA\n");
    }else{
        printf("\nESTE AUTOR TIENE %d TITULO/S\n", cantidad);
    }
}
int main(){

    struct libro vec[4];

    printf("\nCARGUE LOS SIGUIENTES LIBROS\n");
    cargarLibros(vec);

    printf("\nTITULOS\n");
    mostrarListado(vec);

    buscarPorAutor(vec);

    return 0;
}
