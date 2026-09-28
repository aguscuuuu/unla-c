#include <stdio.h>
#include <stdlib.h>

void mostrarMatriz(int matriz[10][12]){
    printf("|ENERO     |FEBRERO   |MARZO     |ABRIL     |MAYO      |JUNIO     |JULIO     |AGOSTO    |SEPTIEMBRE|OCTUBRE   |NOVIEMBRE |DICIEMBRE  \n");
    printf("-------------------------------------------------------------------------------------------------------------------------------------\n");
    for(int i=0; i<10; i++){
        for(int j=0; j<12; j++){
            printf("|%-10d", matriz[i][j]);
        }
        printf("\n");
    }
}
void cargarMatriz(int matriz[10][12]){
    for(int i=0; i<10; i++){
        for(int j=0; j<12; j++){
            printf("| LOCAL: %-4d | MES: %-4d | CIGARRILLOS: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
}
void calcularPromKioscos(int matriz[10][12], float promKioscos[10]){

}
void calcularPromMes(int matriz[10][12], float promMes[12]){

}
void mostrarPromKioscos (float promKioscos[10]){

}
void mostrarPromMes(float promMes[12]){

}
int maximoMatriz(int matriz[10][12]){

}

int main(){

    /*int cigarrillos[10][12] = {0};*/
    int cigarrillos[10][12] = {
        {120, 340,  85, 410, 230, 175, 390, 260, 145, 305, 220, 480},
        {310,  95, 270, 180, 455, 330, 210, 125, 395, 240, 165, 285},
        { 75, 420, 350, 190, 135, 280, 460, 315, 200, 110, 375, 245},
        {265, 185, 440, 305, 150, 370,  90, 225, 335, 415, 130, 290},
        {400, 250, 115, 345, 275, 205, 320, 490, 160, 235, 385, 140},
        {195, 360, 225, 130, 410, 295,  80, 355, 270, 185, 445, 310},
        {340, 105, 380, 255, 165, 435, 215, 145, 300, 470, 195, 260},
        {150, 290, 205, 470, 320, 115, 365, 240, 185, 280, 350,  95},
        {425, 175, 315, 100, 385, 240, 290, 170, 450, 125, 265, 330},
        {230, 395, 160, 285, 200, 350, 140, 405, 115, 360, 210, 455}
    };
    int promKioscos[10] = {0};
    int promMes[12] = {0};

    /*printf("CARGA LA CANTIDAD DE CIGARRILLOS QUE CADA KIOSCO VENDIO POR MES\n\n");
    cargarMatriz(cigarrillos);*/
    printf("RESUMEN DE VENTAS\n\n");
    mostrarMatriz(cigarrillos);
    printf("PROMEDIO DE CIGARRILLOS VENDIDOS POR CADA KIOSCO\n\n");

    return 0;
}
