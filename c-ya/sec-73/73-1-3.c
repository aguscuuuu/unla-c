#include <stdio.h>
#include <stdlib.h>
int main(){

    float num3, num4;

    FILE *arch;
    arch = fopen("archivo2.dat", "rb");
    if(arch==NULL){
        exit(1);}

    fseek(arch,8,SEEK_SET);
    fread(&num3, sizeof(float), 1, arch);
    fread(&num4, sizeof(float), 1, arch);

    printf("\nNUMEROS REALES GUARDADOS:\n");
    printf("%.2f\n%.2f\n", num3, num4);

    fclose(arch);

    return 0;
}
