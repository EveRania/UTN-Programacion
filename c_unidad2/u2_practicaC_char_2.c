/*2- Pedir al usuario que ingrese dos caracteres y luego imprimir la suma de sus códigos ASCII.*/

#include <stdlib.h>
#include <stdio.h>

int main (){

char caracter1; 
char caracter2;
int suma;

printf("Ingrese el primer caracter\n");
scanf(" %c, %i", &caracter1, &caracter1);

printf("Ingrese el segundo caracter\n");
scanf(" %c, %i", &caracter2, &caracter2);



suma = caracter1 + caracter2;

printf("La suma de %i + %i es igual a %i\n", caracter1, caracter2, suma);

system("pause");
return 0;

}