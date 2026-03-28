#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// A)
void limpiarBufferTeclado(){
    int c;
    while((c = getchar()) != '\n' && c != EOF){}
}
// C)
int busquedaSecuencial(char *vector[], int longitud, char* aBuscar){
    for(int iterador = 0; iterador < longitud; iterador++){
        if(strcmp(vector[iterador], aBuscar) == 0){
            return iterador;
        }
    }
    return -1;
}
// D)
int busquedaBinaria(char *arr[], int longitud, char *aBuscar) {
    int inicio = 0;
    int fin = longitud - 1;
    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;
        int comparacion = strcmp(arr[medio], aBuscar);
        if (comparacion == 0) {
            return medio;
        } else if (comparacion < 0) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }
    return -1;
}
// D)
void ordenarPorBurbuja(char *arr[], int longitud){
    for(int iterador1 = 0; iterador1 < longitud - 1; iterador1++){
        for(int iterador2 = 0; iterador2 < longitud - iterador1 - 1; iterador2++){
            if(strcmp(arr[iterador2], arr[iterador2 + 1]) > 0){
                char *temp = arr[iterador2];
                arr[iterador2] = arr[iterador2 + 1];
                arr [iterador2 +1] = temp;
            }
        }
    }
}
void mostrarVector(char *arr[], int longitud){
    for(int iterador = 0; iterador < longitud; iterador++){
        printf("%s   ", arr[iterador]);
    }
}
int main(){
    // B)
    char *arr[] = {"A veces pienso", "Chau me voy", "Siento que va a pasar", "Felicitaciones por eso", "No quiero verte"};
    int longitud = sizeof(arr) / sizeof(arr[0]);

    printf("\nNecesitas borrar el buffer del teclado primero\n\nApreta la tecla ENTER para continuar\n");
    limpiarBufferTeclado();
    system("cls");

    printf("\n- El arreglo contiene las siguientes palabras:\n%s   %s   %s   %s   %s",arr[0],arr[1],arr[2],arr[3],arr[4]);
    printf("\n\n- Que ordenadas alfabeticamente quedarian:\n");
    ordenarPorBurbuja(arr, longitud);
    mostrarVector(arr, longitud);

    printf("\n\nQue frase buscas?\n-> ");
    char aBuscar[100]; // reserva espacio para la frase a buscar
    scanf("%99[^\n]", aBuscar); // que lea hasta 99 caracteres ingresados por el usuario, excluyendo (^) el carácter de nueva línea (\n)
    // 99 indica el número máximo de caracteres
    // el ^ en [^\n] indica no coincidir con el caracter: enter

    int posicionPorSecuencial = busquedaSecuencial(arr, longitud, aBuscar);
    int posicionPorBinaria = busquedaBinaria(arr, longitud, aBuscar);

    if(posicionPorSecuencial != -1){
        printf("\nBusqueda secuencial: La frase '%s' se encuentra en la posicion %d del arreglo\n", aBuscar, posicionPorSecuencial);
        printf("\nBusqueda binaria: La frase '%s' se encuentra en la posicion %d del arreglo\n", aBuscar, posicionPorBinaria);
    }else{
        printf("\nLa frase '%s' no se encuentra en el arreglo\nRecuerda de escribirla exactamente igual (mayusculas y espacios)\n", aBuscar);
    }

    return 0;
}
