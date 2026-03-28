#include <stdio.h>
#include <stdlib.h>

int posicionFibonacci(int n){
    if(n == 0){ // si la posicion es 0...
        return 0; // el valor dentro de la sucesion es 0
    }
    else if(n == 1){ // en cambio, si la posicion es 1...
        return 1; // el valor dentro de la sucesion es 1
    }
    else{ // en cambio, si la posicion no es ni 0 ni 1...
        // así se conforma la Sucesión de Fibonacci
        // cada número es la suma de los dos números anteriores:
        return posicionFibonacci(n-1) + posicionFibonacci(n-2);
    }
}
int main(){

    int n;

    printf("\nIngrese un numero entero mayor o igual a cero. El mismo representara una posicion dentro\n");
    printf("de la Sucesion de Fibonacci que luego dara a conocer con que valor esta asociado \n-> ");
    scanf("%d", &n);

    printf("\nFIB(%d) = %d\n", n, posicionFibonacci(n));
    printf("Es decir, en la posicion %d de la Sucesion se encuentra el numero %d \n", n, posicionFibonacci(n));

    return 0;}
