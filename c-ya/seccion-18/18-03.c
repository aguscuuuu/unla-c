/*
	URL: https://www.tutorialesprogramacionya.com/cya/
	Confeccionar una funci�n que calcule la superficie de un rect�ngulo y la retorne,
	la funci�n recibe como par�metros los valores de dos de sus lados:
	int retornarSuperficie(int lado1,int lado2)
	En la funci�n main del programa cargar los lados de dos rect�ngulos y
	luego mostrar cual de los dos tiene una superficie mayor.
    --------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
int retornarSuperficie(int lado1, int lado2){
    int superficie = lado1 * lado2;
    return superficie;
}
void mostrarSuperficie(int superficie){
    printf("SUPERFICIE: %d\n", superficie);
}
int main()
{
    int lado1, lado2, superficie1, superficie2;

    printf("\nESCRIBA DOS LADOS DEL PRIMER RECTANGULO: \n");
    scanf("%d",&lado1);
    scanf("%d",&lado2);
    superficie1 = retornarSuperficie(lado1,lado2);
    mostrarSuperficie(superficie1);

    printf("\nESCRIBA DOS LADOS DEL SEGUNDO RECTANGULO: \n");
    scanf("%d",&lado1);
    scanf("%d",&lado2);
    superficie2 = retornarSuperficie(lado1,lado2);
    mostrarSuperficie(superficie2);

    if(superficie1>superficie2){
        printf("\nEL PRIMER RECTANGULO TIENE MAYOR SUPERFICIE\n");
    }else{
        printf("\nEL SEGUNDO RECTANGULO TIENE MAYOR SUPERFICIE\n");
    }

    return 0;
}
