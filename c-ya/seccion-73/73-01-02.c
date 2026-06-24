#include <stdio.h>
#include <stdlib.h>
int main(){

    int num1, num2;
    float num3, num4;

    FILE *arch;
    arch = fopen("archivo2.dat", "rb");
    if(arch==NULL){
        exit(1);}

    fread(&num1, sizeof(int), 1, arch);
    fread(&num2, sizeof(int), 1, arch);
    fread(&num3, sizeof(float), 1, arch);
    fread(&num4, sizeof(float), 1, arch);

    printf("\nNUMEROS ENTEROS GUARDADOS:\n");
    printf("%d\n%d\n", num1, num2);
    printf("\nNUMEROS REALES GUARDADOS:\n");
    printf("%.2f\n%.2f\n", num3, num4);

    fclose(arch);

    return 0;
}
