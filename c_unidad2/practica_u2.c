// 1. Ingresar por pantalla dos números y mostrar su suma //

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1;
    int num2;
    int suma; 

    printf("Ingrese el primer numero a sumar\n");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero a sumar\n");
    scanf("%i", &num2);
    suma = num1 + num2;
    printf("La suma es %i\n", suma); 

    system("pause");
    return 0;
}