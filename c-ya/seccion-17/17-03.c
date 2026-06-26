/*
	URL: https://www.tutorialesprogramacionya.com/cya/
	Desarrollar una funci�n que reciba como par�metro un caracter.
	La funci�n debe mostrar un mensaje si es una vocal o no es una vocal.
	Debe funcionar tanto con may�sculas y min�sculas.
    --------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>
void esVocal(char caracter){
    if(caracter=='a' || caracter=='A' || caracter=='e' || caracter=='E' || caracter=='i' || caracter=='I' || caracter=='o' || caracter=='O' || caracter=='u' || caracter=='U'){
        printf("\nEL CARACTER %c ES UNA VOCAL\n", caracter);
    }else{
        printf("\nEL CARACTER %c NO ES UNA VOCAL\n", caracter);
    }
}
int main()
{
    char caracter;
    printf("\nESCRIBA UN CARACTER: ");
    scanf("%c", &caracter);

    esVocal(caracter);

    return 0;
}
