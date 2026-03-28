// Crear un archivo llamado "archivo2.dat". Solicitar la carga de dos enteros y
// dos float por teclado. Almacenar en el archivo primero los dos enteros y seguidamente los dos float. .
// Abrir el archivo "arhivo2.dat" creado en el programa anterior y proceder a su lectura e impresión.
// Abrir el archivo "arhivo2.dat" e imprimir solo los dos valores de tipo float almacenados.
#include <stdio.h>
#include <stdlib.h>
int main(){

    int num1, num2;
    float num3, num4;

    printf("\nINGRESE DOS NUMEROS ENTEROS\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("INGRESE DOS NUMEROS REALES\n");
    scanf("%f", &num3);
    scanf("%f", &num4);

    FILE *arch;
    arch = fopen("archivo2.dat","wb");
    if(arch==NULL){
        exit(1);}
    fwrite(&num1, sizeof(int), 1, arch);
    fwrite(&num2, sizeof(int), 1, arch);
    fwrite(&num3, sizeof(float), 1, arch);
    fwrite(&num4, sizeof(float), 1, arch);
    fclose(arch);

    printf("\ndatos almacenados correctamente\n");

    return 0;
}
