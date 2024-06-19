// 4- Ingresar por teclado tres números, determinar cuál es el mayor y visualizarlo en pantalla.

#include <stdlib.h>
#include <stdio.h>

int main()
{

    int nro1, nro2, nro3;

    printf("Ingrese el primer numero\n");
    scanf("%i", &nro1);

    printf("Ingrese el segundo numero\n");
    scanf("%i", &nro2);

    printf("Ingrese el tercer numero\n");
    scanf("%i", &nro3);

    if (nro1 > nro2 && nro1 > nro3)
    {
        printf("El mayor numero ingresado es %i\n", nro1);
    }
    else
    {
        if (nro1 < nro2 && nro2 > nro3)
        {
            printf("El mayor numero ingresado es %i\n", nro2);
        }
        else
        {
            printf("El mayor numero ingresado es %i\n", nro3);
        }
    }

    system("pause");
    return 0;
}