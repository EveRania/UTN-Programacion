//3- Ingresar los lados de un triángulo calcular su perímetro e imprimirlo.

#include <stdlib.h>
#include <stdio.h>

int main(){
    //variables
    float lado1 ;
    float lado2; 
    float lado3 ;
    float perimetro;
    //pido datos 
    printf ("Ingrese el primer lado del triangulo\n");
    scanf ("%f", &lado1);
    printf ("Ingrese el segundo lado del triangulo\n");
    scanf ("%f", &lado2);
    printf ("Ingrese el tercer lado del triangulo\n");
    scanf ("%f", &lado3);
    //calculo perimetro
    perimetro = lado1 + lado2 + lado3;

    printf ("Los lados del triangulo son: %f, %f, %f. El perimetro es: %0.3f\n", lado1, lado2, lado3, perimetro);

    system ("pause");
    return 0;

}