//1 - LEER DATOS DE LA CONSOLA:

// #include <stdio.h>
// #include <stdlib.h>

// //ejemplo de escritura en consola y lectura de un valor ingresado por teclado

// int main() 
// {
//     char inicialNombre; //variable donde guardaremos la inicial ingresada
//     int edad; //variable donde guardaremos la edad ingresada

//     printf("Ingresa la incial de tu nombre:\n");
//     scanf("%c", &inicialNombre);

//     printf("Ingresa tu edad: \n");
//     scanf("%i", &edad);

//     printf("Hola %c, tu edad es %i. \n", inicialNombre, edad);

//     system("pause"); //necesario para   que la consola no se cierre
//     return 0;

// }


//2 -

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variables enteras
    int num1;
    int num2;
    int resultado;
    printf("Ingrese el primer valor\n");
    scanf(" %d", &num1); //la fn scanf tiene dos argumentos: -%d significa entero decimal -& operador de direccion
    printf("Ingrese el segundo valor\n");
    scanf(" %d", &num2);
    resultado = num1 + num2; //logica del programa
    printf("El resultado de la suma es: %d\n", resultado);
    getch(); //presionar una tecla para continuar. Podemos usar system("pause") o getch(), para pausar la consola y poder ver la salida
    return 0;

}