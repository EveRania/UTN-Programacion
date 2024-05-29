#include <stdio.h>
#include <stdlib.h>

//tengo que usar el prototipo porque el compilador arranca de arriba hacia abajo, o pongo el prototipo o la pongo antes de su llamada para q el compilador la compile antes

//prototipo de la función sumar
//float sumar(float num1, float num2); 



//función sumar 
float sumar(float num1, float num2)
{
    float respuesta;
    respuesta = num1 + num2;

    return respuesta;
}

int main()
{
    float numero1, numero2, resultado;
    
    printf("Ingresa primer numero:\n");
    scanf("%f", &numero1); //90
    printf("Ingresa segundo numero:\n");
    scanf("%f", &numero2); //12
    

    resultado = sumar(numero1, numero2); //llamada a la función sumar()

    printf("La suma es: %f\n", resultado);
     
    system("pause"); 
    return 0;
}

