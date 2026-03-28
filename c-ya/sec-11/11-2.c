// En un banco se procesan datos de las cuentas corrientes de sus clientes. De cada cuenta corriente
// se conoce: número de cuenta y saldo actual. El ingreso de datos debe finalizar al ingresar un valor
// negativo en el número de cuenta. Se pide confeccionar un programa que lea los datos de las cuentas
// corrientes e informe: el número de cada cuenta y estado de la cuenta según su saldo, sabiendo que:
// A) Estado de la cuenta
//     'Acreedor' si el saldo es >0.
//     'Deudor' si el saldo es <0.
//     'Nulo' si el saldo es =0.
// B) La suma total de los saldos acreedores.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cuenta;
    float saldo, suma=0;
    printf("\nCUENTAS CORRIENTES\n");
    do{
        printf("\nNUMERO DE LA CUENTA (valor negativo para finalizar): ");
        scanf("%d", &cuenta);
        if(cuenta>=0){
            printf("SALDO DE LA CUENTA: $");
            scanf("%f", &saldo);
        }
        if(saldo>0){
            printf("ESTADO DE LA CUENTA: ACREEDOR\n");
            suma = suma + saldo;
        }else{
            if(saldo<0){
                printf("ESTADO DE LA CUENTA: DEUDOR\n");
            }else{
                if(saldo==0 && cuenta>=0){
                    printf("ESTADO DE LA CUENTA: NULO\n");
                }
            }
        }
    }while(cuenta >= 0);

    printf("\nSUMA DE SALDOS ACREEDORES: $%.2f\n", suma);


    return 0;
}
