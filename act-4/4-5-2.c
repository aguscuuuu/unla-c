#include <stdio.h>
#include <stdlib.h>

int factorialDeN(int n){
   if (n == 0){
        return 1;
   } else{
       return n * factorialDeN(n - 1);
   }
}

int main(){

    int n, resultado;

    printf("\nEscriba un numero para saber el resultado de su factorial \n-> ");
    scanf("%d", &n);

    resultado = factorialDeN(n);

    printf("\n%d! = %d\n", n, resultado);

    return 0;}
