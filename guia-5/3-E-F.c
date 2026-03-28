#include <stdio.h>
#include <string.h>

// E)
int enString(char *string, char *aBuscar){
    int longitudString = strlen(string);
    int longitudABuscar = strlen(aBuscar);

    for(int iterador1 = 0; iterador1 <= longitudString - longitudABuscar; iterador1++){
        int iterador2;
        for(iterador2 = 0; iterador2 < longitudABuscar; iterador2++){
            if(string[iterador1 + iterador2] != aBuscar[iterador2]){
                break;
            }
        }
        if (iterador2 == longitudABuscar) {
            return iterador1;
        }
    }
    return -1;
}
// F)
void invertirString(char *string){
    int longitud = strlen(string);
    for(int iterador = 0; iterador < longitud / 2; iterador++) {
        char temp = string[iterador];
        string[iterador] = string[longitud - iterador - 1];
        string[longitud - iterador - 1] = temp;
    }
}
int main(){
    char string[] = "Buenos dias";
    char aBuscar[50];  // tamaño máximo de la cadena aBuscar

    printf("\nEsta es la cadena: '%s'", string);

    printf("\n\nIngrese la seccion a buscar: ");
    scanf("%s", aBuscar);

    int resultado = enString(string, aBuscar);

    if (resultado != -1) {
        printf("\n'%s' empieza a partir de la posicion %d\n", aBuscar, resultado);
    } else {
        printf("\n'%s' no se ha encontrado en la cadena.\n", aBuscar);
    }

    invertirString(string);
    printf("\nCadena invertida: %s\n", string);

    return 0;
}
