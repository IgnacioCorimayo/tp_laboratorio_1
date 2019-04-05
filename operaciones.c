void sumar (int x, int y)
{
    int suma = x+y;

    printf("\nEl valor de la suma entre %d + %d es: %d \n", x, y, suma);
}

void restar (int x, int y)
{
    int resta;
    resta = x-y;

    printf("El resultado de %d-%d es: %d \n", x, y, resta);
}

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

void multiplicar (int x, int y)
{
    int multiplicacion;
    multiplicacion = x * y;

    printf("El resultado de %d*%d es : %d \n", x, y, multiplicacion);
}

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
