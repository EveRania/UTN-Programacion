/*3- Pedir al usuario que ingrese un carácter en mayúscula y luego imprimir su equivalente 
en minúscula.*/
 
#include <stdlib.h>
#include <stdio.h>

int main (){

char caracter;
char minuscula;

printf ("Ingerse un caracter en mayuscula\n");
scanf("%c, %i", &caracter, &caracter);

minuscula = 32 + caracter;

printf ("La letra ingresada es %c y su minuscula es %c\n",  caracter, minuscula);

system ("pause");
return 0;


}
