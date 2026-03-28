// Escribir un programa que solicite ingresar 10 notas de alumnos y nos
// informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int iterador = 1, nota, aprobados = 0, desaprobados = 0;

    printf("\nINGRESE DIEZ NOTAS DE ALUMNOS:\n");

    while(iterador <= 10){
        scanf("%d", &nota);
        if(nota>=7){
            aprobados++;
        }else{
            if(nota<7){
                desaprobados++;
            }
        }
        iterador++;
    }

    printf("\nALUMNOS APROBADOS: %d", aprobados);
    printf("\nALUMNOS DESAPROBADOS: %d\n", desaprobados);

    return 0;
}
