// Escriba un programa que pida ingresar un número y a continuación 
// escriba en la consola si el mismo es par o impar. Para ello desarrollar 
// una función llamada esPar que reciba un entero y retorne un 1 si el 
// número es par y un 0 si el número no es par.

#include <stdlib.h>
#include <stdio.h>

int esPar(int numero);
void mensajeEsPar (int numero);

int main()
{
    //declaro una variable que pueda almacenar el valor que devuelve la funcion
    int numeroIngresado, res;

    printf("Ingrese un numero entero\n");
    scanf("%d", &numeroIngresado);

    res = esPar(numeroIngresado);

    if(res == 1)
{
    printf("El numero ingresado es PAR\n");
} 
else 
{
    printf("El numero ingresado es IMPAR\n");
}

    return 0;
}

//esta fn recibe un entero y retorna 1 si el numero es par y 0 si el numero no es par
int esPar(int numero)
{
    int resultado = 0;

    if(numero % 2 == 0)
    {
        resultado = 1;
    }
    return resultado;
}

//podria usar void pero me limita a solo imprimir en consola el resultado, si luego yo necesito usar ese resultado no puedo. 
void mensajeEsPar(int numero)
{
if(numero % 2 == 0)
{
    printf("El numero ingresado es PAR\n");
}
else{
    printf("El numero ingressado es IMPAR\n");
}
}