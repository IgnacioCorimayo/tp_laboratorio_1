#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main()
{
    int opcion;
    int num1;
    int num2;
    int resultadoSuma;
    int resultadoResta;
    int resultadoMultiplicacion;
    int flag;
    int flag2;

    num1 = 0;
    num2 = 0;
    flag = 0;
    flag2 = 0;

    do
    {

        if(flag==0)
        {
            printf("\n1- Ingrese el primer operando");
        }
        else
        {
            printf("\n1- Ingrese el 1º operando: ");
        }

        if(flag2==0)
        {
            printf("\n2- Ingrese el segundo operando\n");
        }
        else
        {
            printf("\n2- Ingrese el segundo operando");
            printf("\n");
        }

        printf("3- Calcular todas las operaciones \n");
        printf("4- Informar resultados \n");
        printf("5- Salir \n");

        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                flag = 1;

                printf("\nIngrese el 1º operando: ");
                scanf("%d", &num1);

                printf("El primer operando es: %d \n", num1);


            break;

            case 2:
                flag2 = 1;
                printf("Ingrese el 2º operando: ");
                scanf("%d", &num2);

                printf("El segundo operando es: %d \n", num2);

            break;

            case 3:
                if(flag==0 && flag2==0)
                {
                    printf("Error no se puede realizar la operacion porque falta ingresar operando");
                }
                else
                {
                    printf("Calculando todas las operaciones. Ingrese la opcion 4 para ver los resultados \n");

                    resultadoSuma = sumar (num1,num2);
                    resultadoResta = restar (num1,num2);
                    resultadoMultiplicacion = multiplicar(num1,num2);
                }
            break;

            case 4:
                if(flag==0 && flag2==0)
                {
                    printf("Error no se puede realizar la operacion porque falta ingresar operando");
                }
                else
                {
                    printf("Informar resultados");

                    printf("\nEl resultado de la suma entre %d + %d es: %d \n", num1, num2,resultadoSuma);
                    printf("El resultado de %d - %d es: %d \n", num1, num2, resultadoResta);
                    printf("El resultado de %d*%d es : %d \n", num1, num2, resultadoMultiplicacion);
                    dividir (num1, num2);
                    factorial (num1, num2);

                printf("\n");

                }
            break;

            case 5:
                printf("Saliendo del programa\n");
            break;

            default:
                printf("Ingrese una opcion valida");
            break;
        }

    }while (opcion != 5);
}
