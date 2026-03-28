// Se tiene la siguiente declaración de registro:
// struct pais {
//    char nombre[40];
//    int cantidadhab;
// };
// Definir tres variables de tipo país e iniciarlas por asignación con la sintaxis:
// struct pais pais1={"Argentina",40000000};
// Elaborar una función que reciba un parámetro de tipo pais y muestre por pantalla
// sus dos campos. Llamar a dicha función desde la main pasando en forma sucesiva las
// tres variables definidas.
#include <stdio.h>
#include <stdlib.h>
struct pais {
    char nombre[40];
    int cantidadhab;
};
void mostrarStruct(struct pais x){
    printf("\nNOMBRE: %s", x.nombre);
    printf("\nHABITANTES: %d\n", x.cantidadhab);
}
int main(){

    struct pais pais1 = {"Argentina",200};
    struct pais pais2 = {"Bolivia",30};
    struct pais pais3 = {"Chile",130};

    mostrarStruct(pais1);
    mostrarStruct(pais2);
    mostrarStruct(pais3);

    return 0;
}
