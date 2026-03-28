// Definir un vector de 5 componentes de tipo float en la función main que representen las alturas de 5 personas.
// Desarrollar las siguientes funciones:
// 1-Carga del vector.
// 2-Retornar el promedio del vector.
// float calcularPromedio(float alturas[5])
// 3-Contar y luego imprimir cuántas personas son más altas que el promedio y cuántas más bajas.
// void altasBajas(float alturas[5],float pro)

#include <stdio.h>
#include <stdlib.h>

void cargaVector(float alturas[5]){
    for(int iterador=0; iterador<5; iterador++){
        scanf("%f", &alturas[iterador]);
    }
}

float valorPromedio(float alturas[5]){
    float suma=0;
    for(int iterador=0; iterador<5; iterador++){
        suma = suma + alturas[iterador];
    }
    return suma/5;
}

void altasBajas(float alturas[5], float pro){
    int iterador, contador=0;
    for (iterador=0; iterador<5; iterador++){
        if(alturas[iterador] > pro){
            contador++;
        }
    }
    printf("\nPERSONAS MAS ALTAS QUE EL PROMEDIO: %d\n", contador);
}

int main(){

    int alturas[5], masAltas;
    float promedio;

    printf("\nCARGUE LAS ALTURAS DE CINCO PERSONAS: \n");
    cargaVector(alturas);
    printf("\n");

    promedio = valorPromedio(alturas);
    printf("\nPROMEDIO: %.2f\n", promedio);

    altasBajas(alturas,promedio);

    return 0;
}
