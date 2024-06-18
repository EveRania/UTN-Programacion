//5. Ingresar la fecha de nacimiento de una persona e informar la edad.

#include <stdlib.h>
#include <stdio.h>

int main(){

int dia_nacimiento, mes_nacimiento, anio_nacimiento;
int dia_actual, mes_actual, anio_actual, edad;

dia_actual = 18;
mes_actual = 6;
anio_actual = 2024;

printf("Ingrese su dia de nacimiento\n");
scanf("%i", &dia_nacimiento);

printf("Ingrese su mes de nacimiento\n");
scanf("%i", &mes_nacimiento);

printf("Ingrese su año de nacimiento\n");
scanf("%i", &anio_nacimiento);

edad = anio_actual - anio_nacimiento;
if (mes_actual < mes_nacimiento) {
    edad = edad-1;
} else {
    if (mes_actual == mes_nacimiento){
        if(dia_actual<dia_nacimiento) {
            edad = edad-1;
        }
    }
}

printf("Su edad es %i\n", edad);

system("pause");
return 0;

}