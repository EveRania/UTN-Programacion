/*1- Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en pantalla.*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    float num1, num2;

    printf("Ingrese el primer numero\n");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero\n");
    scanf("%f", &num2);

    if (num1 > num2)
    {
        printf("El mayor numero es %.2f", num1);
    }
    else
    {
        printf("El mayor numero es %.2f", num2);
    }

    system("pause");
    return 0;
}