/*7- Ingresar el valor de la hora y el tiempo trabajado por un comerciante, calcular su sueldo e imprimirlo*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){

float valor_hora, tiempo_trabajado, sueldo;

printf("Ingrese el valor de la hora de trabajo\n");
scanf("%f", &valor_hora);

printf("Ingrese las horas trabajadas este mes\n");
scanf("%f", &tiempo_trabajado);

sueldo = valor_hora * tiempo_trabajado ; 

printf("Su sueldo es: $%.2f\n", sueldo);

    system ("pause");
    return 0; 
}