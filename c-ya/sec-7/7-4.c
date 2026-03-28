// Un postulante a un empleo, realiza un test de capacitación, se obtuvo la siguiente información:
// cantidad total de preguntas que se le realizaron y la cantidad de preguntas que contestó correctamente.
// Se pide confeccionar un programa que ingrese los dos datos por teclado e informe el nivel del mismo según el
// porcentaje de respuestas correctas que ha obtenido, y sabiendo que:
//	Nivel máximo:	Porcentaje>=90%.
//	Nivel medio:	Porcentaje>=75% y <90%.
//	Nivel regular:	Porcentaje>=50% y <75%.
//	Fuera de nivel:	Porcentaje<50%.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int pregsCorrectas, preg1, preg2;
    float porcentaje;

    pregsCorrectas = 0;

    printf("\nTEST MATEMATICO\n\nCONTESTE LAS SIGUIENTES PREGUNTAS:\n");

    printf("\n1) CUANTO ES 2 + 2 = ");
    scanf("%d", &preg1);
    if(preg1 != 4){
        printf("INCORRECTO\n");
    }else if(preg1 == 4){
        printf("CORRECTO\n");
        pregsCorrectas++;
    }

    printf("\n2) CUANTO ES 3 * 2 = ");
    scanf("%d", &preg2);
    if(preg2 != 6){
        printf("INCORRECTO\n");
    }else if(preg2 == 6){
        printf("CORRECTO\n");
        pregsCorrectas++;
    }

    porcentaje = ((float)pregsCorrectas / 2) * 100;
    printf("\nCANTIDAD DE RESPUESTAS CORRECTAS: %d (%.2f)\n", pregsCorrectas, porcentaje);
    if(porcentaje>=90){
        printf("\nNIVEL ALCANZADO: MAXIMO\n");
    }else{
        if(porcentaje>=75 && porcentaje<90){
            printf("\nNIVEL ALCANZADO: MEDIO\n");
        }else{
            if(porcentaje>=50 && porcentaje<75){
                printf("\nNIVEL ALCANZADO: REGULAR\n");
            }else{
                if(porcentaje<50){
                    printf("\nNIVEL ALCANZADO: REPROBADO\n");
                }
            }
        }
    }

    return 0;
}
