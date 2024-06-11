/*8- Ingresar el tiempo trabajado por un contador y considerando que el valor de la hora es de 800 pesos, calcular su sueldo e imprimirlo*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){

float horas, valor, sueldo;
valor = 800;

printf("Ingrese las horas trabajadas este mes\n");
scanf("%f", &horas);

sueldo = horas * valor;

printf ("Su sueldo este mes es: $%.2f\n", sueldo);

    system ("pause");
    return 0;
}