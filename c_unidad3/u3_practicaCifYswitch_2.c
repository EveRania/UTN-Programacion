/*2- Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en pantalla. Informar también si los números son iguales.*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    float num1, num2;

    printf("Ingrese el primer numero\n");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero\n");
    scanf("%f", &num2);

    if (num1 == num2)
    {
        printf("Ambos numeros ingresados son iguales\n");
    }
    else
    {
        if (num1 > num2)
        {
            printf("El numero mayor es: %.2f\n", num1);
        }
        else
        {
            printf("El numero mayor es: %.2f\n", num2);
        }
    }


    system("pause");
    return 0;
}