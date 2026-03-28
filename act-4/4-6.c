#include <stdio.h>
#include <stdlib.h>

int posicionFibonacci(int n){
    int iterador;
    int fibn;
    int aux1 = 0;
    int aux2 = 1;

    if(n == 0){ // si la posicion es 0...
        fibn = 0; // el valor dentro de la sucesion es 0 (posicion 0, valor 0)
    }
    else if(n == 1){ // en cambio, si la posicion es 1...
        fibn = 1;
    }
    else{ // en cambio, si la posicion no es ni 0 ni 1...
        for(iterador = 2; iterador <= n; iterador++){ // iterar desde 2 hasta la posicion requerida
            fibn = aux1 + aux2;
            aux1 = aux2;
            aux2 = fibn;
        }
    }
    return fibn;
}
int main(){

    int n;

    printf("\nIngrese un numero entero mayor o igual a cero. El mismo representara una posicion dentro\n");
    printf("de la Sucesion de Fibonacci que luego dara a conocer con que valor esta asociado \n-> ");
    scanf("%d", &n);

    printf("\nFIB(%d) = %d\n", n, posicionFibonacci(n));
    printf("Es decir, en la posicion %d de la Sucesion se encuentra el numero %d \n", n, posicionFibonacci(n));

    return 0;}
