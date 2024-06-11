/*5- El usuario debe poder ingresar los lados de un rectángulo y el programa calcula con esos datos la diagonal principal del rectángulo, superficie y perímetro. Mostrar al usuario los resultados*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float lado1, lado2;
    float diagonal, superficie, perimetro;

    printf("Ingrese el primer lado del rectangulo\n");
    scanf("%f", &lado1);
    printf("Ingrese el segundo lado del rectangulo\n");
    scanf("%f", &lado2);

    diagonal = sqrt (pow(lado1, 2) + pow(lado2, 2));
   
    superficie = lado1 * lado2;

    perimetro = 2* (lado1 + lado2);

    printf("Para un triangulo de %.2f x %.2f: \n Diagonal princial= %.2f,\n Superficie= %.2f,\n perimetro= %.2f\n ", lado1, lado2, diagonal, superficie, perimetro);

    system("pause");
    return 0;
}