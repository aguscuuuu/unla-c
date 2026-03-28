// Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, cada curso cuenta con 5 alumnos.
// 1) Realizar la carga de las notas.
// 2) Mostrar el nombre del curso que obtuvo el mayor promedio general.
#include <stdio.h>
#include <stdlib.h>
void cargarNotas(int vector[5]){
    int iterador;
    for(iterador=0; iterador<5; iterador++){
        printf("ALUMNO %d = ", iterador+1);
        scanf("%d", &vector[iterador]);
    }
}
float promedio(int vector[5]){
    int iterador
    float suma=0;
    for(iterador=0; iterador<5; iterador++){
        suma = suma + vector[iterador];
    }
    return suma / 5;
}
int main(){
    int cursoA[5], cursoB[5];
    float promedioA, promedioB;

    printf("\nNOTAS DEL CURSO A:\n");
    cargarNotas(cursoA);
    printf("\nNOTAS DEL CURSO B:\n");
    cargarNotas(cursoB);

    promedioA = promedio(cursoA);
    promedioB = promedio(cursoB);

    printf("\nPROMEDIO CURSO A: %.2f\n", promedioA);
    printf("\nPROMEDIO CURSO B: %.2f\n", promedioB);

    if(promedioA > promedioB){
        printf("\nEL CURSO A TIENE MAYOR PROMEDIO\n");
    }else{
        printf("\nEL CURSO B TIENE MAYOR PROMEDIO\n");
    }

    return 0;
}
