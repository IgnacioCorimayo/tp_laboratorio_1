#include <stdio.h>
#include <stdlib.h>

/** \brief Suma dos valores enteros y devuelve el resultado
 *
 * \param x es primer operando entero
 * \param y es segundo operando entero
 * \return el resultado de la suma de x+y
 *
 */

int sumar (int x, int y)
{
    int suma = x+y;
    return suma;
}

/** \brief Resta dos valores enteros y devuelve el resultado
 *
 * \param x es primer operando entero
 * \param y es segundo operando entero
 * \return el resultado de la resta de x-y
 *
 */

int restar (int x, int y)
{
    int resta;
    resta = x-y;

    return resta;
}

/** \brief Divide dos valores flotantes y devuelve el resultado
 *
 * \param x es primer operando flotante
 * \param y es segundo operando flotante
 * \return muestra el resultado de la division
 *
 */

void dividir (float x, float y)
{
    float division;
    division = x/y;

    if (y == 0)
    {
        printf("No es posible dividir por cero \n");
    }
    else
    {
        printf("El resultado de %1.f/%1.f es: %.1f \n", x, y, division);
    }
}

/** \brief Multiplica dos valores enteros y muestra el resultado
 *
 * \param x es primer operando entero
 * \param y es segundo operando entero
 * \return el resultado de la multiplicacion de x*y
 *
 */

int multiplicar (int x, int y)
{
    int multiplicacion;
    multiplicacion = x * y;

    return multiplicacion;
}

/** \brief Factorial de dos valores enteros y muestra el resultado de cada uno
 *
 * \param x es primer operando entero
 * \param y es segundo operando entero
 * \return muestra el factorial de cada numero
 */

void factorial (int x, int y)
{
    int factorial;
    int contador;
    int factorial2;
    int contador2;

    contador = 1;
    factorial = 1;
    contador2 = 1;
    factorial2 = 1;

    if (x > 0)
    {
        while(contador<=x)
        {
            factorial = factorial * contador;
            contador++;
        }
        printf("El factorial de %d es: %d \n", x, factorial);
    }
    else
    {
        printf("El primer numero no tiene factorial \n");
    }

    if (y > 0)
    {
        while(contador2<=y)
        {
            factorial2 = factorial2 * contador2;
            contador2++;
        }
        printf("El factorial de %d es: %d \n", y, factorial2);
    }
    else
    {
        printf("El segundo numero no tiene factorial \n");
    }
}
