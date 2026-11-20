#include <stdio.h>
#include <stdlib.h>
#define CANT 10

struct Usuario{
    int dni;
    char nombre[20];
    char contrasenia[20];
};

void cargarUsuarios(struct Usuario usuarios[], int cant){
    for (int i=0; i<cant; i++){
        printf("\nCARGUE LOS DATOS DEL USUARIO: %d\n\n", i+1);
        printf("NOMBRE: ");
        scanf("%s", usuarios[i].nombre);
        printf("DNI: ");
        scanf("%d", &usuarios[i].dni);
        printf("CONTRASENIA: ");
        scanf("%s", usuarios[i].contrasenia);
    }
}

void mostrarUsuarios(struct Usuario usuarios[], int cant){
    for(int i=0; i<cant; i++){
        printf("\nUSUARIO %d\nDNI: %d \nNOMBRE: %s \nCONTRASENIA: %s\n", i+1, usuarios[i].dni, usuarios[i].nombre, usuarios[i].contrasenia);
    }
}

void ordenarUsuarios(struct Usuario usuarios[], int cant){
    for(int i=0; i<cant; i++){

    }
}

int usuariosConContraIncorrecta(){


}

int main(){

    // ya cargado (para probar)
    struct Usuario usuarios[CANT] = {
        {38456712, "Lucia", "trb4512"},
        {28734512, "Federico", "sol2024"},
        {40123987, "Bruno", "gato99"},
        {45678123, "Ana", "murcielago"},
        {37890456, "Tomas", "perro77"},
        {43219876, "Valentina", "mariposa"},
        {31234567, "Diego", "x7k9p2"},
        {44561239, "Sofia", "banana12"},
        {35678901, "Martin", "lunes"},
        {29876543, "Carla", "aeiou"}
    };

    //struct Usuario usuarios[CANT];
    //cargarUsuarios(usuarios, CANT);
    //ordenarUsuarios(usuarios, CANT);
    mostrarUsuarios(usuarios, CANT);


    return 0;
}
