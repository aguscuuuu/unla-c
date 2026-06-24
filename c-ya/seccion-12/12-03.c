// Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso
// A y el curso B, cada curso cuenta con 5 alumnos. Realizar un programa que muestre
// el curso que obtuvo el mayor promedio general.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cursoA[5], cursoB[5], suma, iterador;
    float promedioA, promedioB;

    printf("\nNOTAS DEL CURSO A\n");
    suma=0;
    for(iterador = 1; iterador<=5; iterador++){
        printf("ALUMNO %d = ", iterador);
        scanf("%d", &cursoA[iterador]);
        suma = suma + cursoA[iterador];
        promedioA = (float)suma / 5;
    }

    printf("\nNOTAS DEL CURSO B\n");
    suma=0;
    for(iterador = 1; iterador<=5; iterador++){
        printf("ALUMNO %d = ", iterador);
        scanf("%d", &cursoB[iterador]);
        suma = suma + cursoB[iterador];
        promedioB = (float)suma / 5;
    }

    printf("\nPROMEDIO DEL CURSO A: %.2f", promedioA);
    printf("\nPROMEDIO DEL CURSO B: %.2f", promedioB);
    if(promedioA > promedioB){
        printf("\nCURSO CON MEJOR PROMEDIO: A\n");
    }else{
        printf("\nCURSO CON MEJOR PROMEDIO: B\n");
    }

    return 0;
}
