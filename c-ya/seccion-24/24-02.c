// En un curso de 4 alumnos se registraron las notas de sus exámenes y se deben procesar de acuerdo a lo siguiente:
// a) Ingresar Nombre y Nota de cada alumno (almacenar los datos en estructuras paralelas)
// b) Realizar un listado que muestre los nombres, notas y condición del alumno. En la condición, colocar "Muy Bueno"
//    si la nota es mayor o igual a 8, "Bueno" si la nota está entre 4 y 7, y colocar "Insuficiente" si la nota es inferior a 4.
// c) Imprimir cuantos alumnos tienen la leyenda “Muy Bueno”.
#include <stdio.h>
#include <stdlib.h>
void cargar(char matriz[4][41], int vector[4]){
    int iterador;
    for(iterador=0; iterador<4; iterador++){
        printf("\nNOMBRE: ");
        gets(matriz[iterador]);
        printf("NOTA: ");
        scanf("%d", &vector[iterador]);
        fflush(stdin);
    }
}
void imprimir(char matriz[4][41], int vector[4]){
    int iterador, contador=0;
    for(iterador=0; iterador<4; iterador++){
        printf("\nNOMBRE: %s", matriz[iterador]);
        printf("\nNOTA: %d", vector[iterador]);
        if(vector[iterador] >= 8){
            printf("\nCONDICION: MUY BUENO\n");
            contador++;
        }else{
            if(vector[iterador] >= 4 && vector[iterador] <= 7){
                printf("\nCONDICION: BUENO\n");
            }else{
                if(vector[iterador] < 4){
                    printf("\nCONDICION: INSUFICIENTE\n");
                }
            }
        }
    }
    printf("\n\nCANTIDAD DE ALUMNOS CON CONDICION 'MUY BUENO': %d\n", contador);
}
int main(){

    char nombresCurso[4][41];
    int notasCurso[4];

    printf("\nCARGUE LAS NOTAS DEL CURSO: \n");
    cargar(nombresCurso, notasCurso);

    printf("\nNOTAS DEL CURSO: \n");
    imprimir(nombresCurso, notasCurso);

    return 0;
}
