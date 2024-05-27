//2- Ingresar tres valores, sumarlos e imprimir esa suma.
#include <stdio.h>
#include <stdlib.h>

int main(){
    //definicion de variables
float num1;
float num2;
float num3;
float suma;

    //ingresar valores por pantalla
    printf("Ingrese el primer numero\n");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero\n");
    scanf("%f", &num2);
    printf("Ingrese el tercer numero\n");
    scanf("%f", &num3);
//suma
    suma = num1+num2+num3;
//mostrar resultado con solo dos decimales
    printf("%f + %f + %f = %0.2f\n", num1, num2, num3, suma);
system ("pause");
return 0;

}