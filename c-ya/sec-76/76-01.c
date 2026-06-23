// Confeccionar un programa que solicite el ingreso de un entero por
// teclado y luego grabe en un archivo los números comprendidos entre
// 1 y el número ingresado de uno en uno. Ej. Si se ingresa un 10 luego
// se graban en el archivo 1,2,3,4,5,6,7,8,9,10 (nombre del archivo: "archivo5.dat")
// Imprimir luego el contenido del archivo
#include <stdio.h>
#include <stdlib.h>
void crearCargar(int numero){

    int iterador;

    FILE *arch;
    arch = fopen("archivo5.dat", "wb");
    if(arch==NULL){
        exit(1);}

    for(iterador=1; iterador<=numero; iterador++){
        fwrite(&iterador, sizeof(int), 1, arch);
    }

    fclose(arch);
}

void imprimir(){
    FILE *arch;
    arch = fopen("archivo5.dat", "rb");
    if(arch==NULL){
        exit(1);}

    int x;
    fread(&x, sizeof(int), 1, arch);

    while(!feof(arch)){
        printf("%d ", x);
        fread(&x, sizeof(int), 1, arch);
    }
    fclose(arch);
}

int main(){

    int numero;
    printf("\nGUARDAR VALORES ENTRE 1 Y ");
    scanf("%d", &numero);

    crearCargar(numero);
    imprimir();

    return 0;
}
