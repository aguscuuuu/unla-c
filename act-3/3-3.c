#include <stdio.h>
#include <stdlib.h>

int main(){

    // el numero secreto es 50 y el maximo de intentos es 10
    int num = 50, numUsuario, maxIntentos = 10, intentos;

    printf("\nAdivina el numero entre 1 y 100 en 10 intentos o menos \n");
    printf("-> ");
    intentos = 1;
    scanf("%d", &numUsuario);

    while(num != numUsuario && intentos < maxIntentos){ // mientras el numero y el numero ingresado sean diferentes y que los intentos sean menores a 10
        if(num > numUsuario){
            printf("\nEl numero es mayor, ingrese nuevamente\n-> ");
            scanf("%d", &numUsuario);
            intentos = intentos + 1;
        }
        else{
            printf("\nEl numero es menor, ingrese nuevamente\n-> ");
            scanf("%d", &numUsuario);
            intentos = intentos + 1;
        }
    }

    if(num == numUsuario){ // si el numero secreto es igual al numero ingresado...
        printf("\nFelicidades! El numero era %d. Lo has adivinado en %d intentos\n\n", num, intentos);
    }
    else{ // si el numero secreto no es igual al numero ingresado...
        printf("\nQue lastima! El numero era %d. No lo has adivinado en %d intentos o menos\n\n", num, maxIntentos);
    }

    return 0;}

