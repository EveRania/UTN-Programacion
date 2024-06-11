/*6- Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do valor ingresado, imprimir los resultados*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float valor1, valor2, suma, producto, resta;

    printf("Ingrese el primer valor\n");
    scanf("%f", &valor1);
    printf("Ingrese el segundo valor\n");
    scanf("%f", &valor2);

    suma = valor1 + valor2;

    producto = valor1 * valor2;

    resta = valor1 - valor2;

    printf("Los numeros ingresados son = %.2f y %.2f\n Su suma es = %.2f\n Su producto es = %.2f\n Su resta es = %.2f\n", valor1, valor2, suma, producto, resta);

    system("pause");
    return 0;
}