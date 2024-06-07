//4- Solicitar ingresar dos lados de un triángulo rectángulo (un grado 90, los otros dos agudos) y calcular, la hipotenusa, el perímetro, la superficie. Imprima los resultados de las operaciones solicitadas.

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){
    float lado1, lado2;
    float hipotenusa, perimetro, superficie;

    printf ("Ingrese un lado del triangulo rectangulo\n");
    scanf("%f", &lado1);
    printf ("Ingrese otro lado del triangulo rectangulo\n");
    scanf("%f", &lado2);
    hipotenusa = pow(lado1, 2) + pow(lado2, 2);
    hipotenusa = sqrt(hipotenusa);

    superficie = (lado1 * lado2) /2 ;
    perimetro = lado1 + lado2 + hipotenusa;

    printf("La hipotenusa es de : %.2f. La superficie es %.2f y el perimetro es %.2f.\n", hipotenusa, superficie, perimetro);

system ("pause");
return 0;
}