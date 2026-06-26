/*
    Realizar una función
    int enString(char *string, char *aBuscar)
    que devuelva la primera posición de string en la que se encuentra aBuscar. Devolver -1 si aBuscar no se
    encuentra contenido en el string. Ejemplos:
    enString("Buenos dias", "nos")      // debe devolver 3
    enString("Buenos dias", "noche")    // debe devolver -1
    --------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>

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
        if(iterador2 == longitudABuscar){
            return iterador1;
        }
    }
    return -1;
}

int main(){
    char string[] = "Buenos dias";
    char aBuscar[50];

    printf("Cadena base: '%s'\n", string);
    printf("Ingrese la seccion a buscar: ");
    scanf("%49s", aBuscar);

    int resultado = enString(string, aBuscar);

    if(resultado != -1){
        printf("'%s' empieza en la posicion %d de la cadena\n", aBuscar, resultado);
    } else {
        printf("'%s' no se ha encontrado en la cadena\n", aBuscar);
    }

    return 0;
}
