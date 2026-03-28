#include <stdio.h>
#include <stdlib.h>

int main()
{
    int operacion, operando1, operando2;
    float resultDiv;

    printf("\nQue tipo de operacion desea realizar? \n");
    printf("    - Sumar (presione 1) \n");
    printf("    - Restar (presione 2) \n");
    printf("    - Multiplicar (presione 3) \n");
    printf("    - Dividir (presione 4) \n\n");
    printf("Para salir presione 0\n\n");
    printf("-> ");
    scanf("%d", &operacion);

    system("cls"); // limpiamos pantalla

    switch(operacion){
        case 1: // se trata de una suma
            printf("\nIngrese dos numeros enteros para sumarlos \n");
            printf("\n->  ");
            scanf("%d", &operando1);
            printf("->  ");
            scanf("%d", &operando2);
            printf("\n%d + %d = %d \n", operando1, operando2, operando1 + operando2);
            break;

        case 2: // se trata de una resta
            printf("\nIngrese dos numeros enteros para restarlos \n");
            printf("\n->  ");
            scanf("%d", &operando1);
            printf("->  ");
            scanf("%d", &operando2);
            printf("\n%d - %d = %d \n", operando1, operando2, operando1 - operando2);
            break;

        case 3: // se trata de una multiplicacion
            printf("\nIngrese dos numeros enteros para multiplicarlos \n");
            printf("\n->  ");
            scanf("%d", &operando1);
            printf("->  ");
            scanf("%d", &operando2);
            printf("\n%d * %d = %d \n", operando1, operando2, operando1 * operando2);
            break;

        case 4: // se trata de una division
            printf("\nIngrese dos numeros enteros para dividirlos \n");
                printf("\n->  ");
                scanf("%d", &operando1);
                printf("->  ");
                scanf("%d", &operando2);

            if(operando2 == 0){ // si la division es por 0... no hacerla
                system("cls");
                printf("\nERROR: No se puede dividir por 0 \n"); // le informamos al usuario el error
                return 1; // le informamos al programa el error
            }
            else{ // si la division no es por cero... hacerla
                resultDiv = (float)operando1 / operando2;  // para que se muestre la division bien hay que pasar uno de los enteros a decimal
                if(operando1%operando2 != 0){ // si el resto de la division no es igual a cero...
                    printf("\n%d / %d = %.2f \n", operando1, operando2, resultDiv); // mostrar decimales (porque no da un numero entero)
                }
                else{ // si el resto de la division es igual a cero...
                    resultDiv = operando1 / operando2;
                    printf("\n%d / %d = %.0f \n", operando1, operando2, resultDiv); // no mostrar decimales (porque da un numero entero)
                }
            }
            break;

        case 0:
            system("cls");
            printf("\nHasta luego! Vuelva pronto! \n");
            break;

        default:
            system("cls");
            printf("\nERROR: El valor que solicito no esta especificado\n"); // le informamos al usuario el error
            return 1; // le informamos al programa el error
            break;
    }

    return 0;
}
