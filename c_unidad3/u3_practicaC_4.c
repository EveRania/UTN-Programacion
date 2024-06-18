// 4. Ingresar un número e informar su factorial:  el factorial de un número es igual al producto de todos los números enteros positivos desde 1 hasta dicho número

#include <stdlib.h>
#include <stdio.h>

int main()
{

    int nro, i;
    float factorial = 1;

    printf("Ingrese un numero para calcular su factorial\n");
    scanf("%i", &nro);

    for (i = 1; i <= nro; i++)
    {
        factorial = factorial * i;
    }

    printf("El factorial de %i es %.2f\n", nro, factorial);

    system("pause");
    return 0;
}

