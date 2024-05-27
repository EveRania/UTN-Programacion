#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
    float lado1, lado2, hipotenusa, perimetro, superficie;
    printf("Ingrese los catetos de su triangulo rectangulo, separdos por una coma\n");
    scanf("%f, %f", &lado1, &lado2);
    // no es recomendable poner tantos scanf juntos
    hipotenusa - sqrt(pow(lado1, 2) + pow(lado2, 2));
    perimetro = hipotenusa + lado1 + lado2;
    superficie = (lado1 * lado2) / 2;
    printf("Los valores de su triangulo son: \nHipotenusa: %.2f\nPerimetro: %f\nSuperficie:%f\n", hipotenusa, perimetro, superficie);
    system("pause");
} 