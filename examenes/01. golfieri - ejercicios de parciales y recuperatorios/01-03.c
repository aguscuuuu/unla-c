#include <stdio.h>
#include <stdlib.h>

struct Usuario{
    int dni;
    char nombre[20];
    char contrasenia[20];
};

void cargarUsuarios(struct Usuario usuarios[], int cant){
    for (int i=0; i<cant; i++){
        printf("CARGUE LOS DATOS DEL USUARIO %d\n\n", i+1);
        printf("NOMBRE: ");
        scanf("%s", usuarios[i].nombre);
        printf("DNI: ");
        scanf("%d", &usuarios[i].dni);
        printf("CONTRASENIA: ");
        scanf("%s", usuarios[i].contrasenia);
    }
}

void mostrarUsuarios(){

}

void ordenarUsuarios(){

}

int usuariosConContraIncorrecta(){

    return ;
}

int main(){

    struct Usuario usuarios[10];

    return 0;
}
