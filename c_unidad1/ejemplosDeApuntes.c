//1--IMPRIMIR MENSJAE POR CONSOLA, DEJAR ESPACIO \n, SYSTEM, RETURN 0
// #include <stdio.h>
// #include <stdlib.h>

// int main() 
// {
//     printf("Welcome to JavaTpoint\n");
//     system("pause");
//     return 0;
// }



//-2 Para saber el valor de un numero en ascii y el caracter correspondiente a un numero en ascii

// #include <stdlib.h>
// #include <stdio.h>

// int main() 
// {
//     char c = 65; //'A' es ASCII
//     printf("El caracter correspondiente al valor %d es: %c\n", c, c);

//     char letraA = 'A';
//     printf("El numero correspodiente al caracter %c es: %d\n", letraA, letraA);

//     system ("pause");
//     return 0;
// } 



//3- USANDO getchar() PARA LEER CARACTERES DESDE TECLADO
// #include <stdio.h>
// #include <stdlib.h>

// int main ()
// {
//     char caracter;
//     printf("Ingresa un caracter: ");
//     caracter = getchar();
//     printf("El caracter ingresado es: %c\n", caracter);

//     system("pause");
//     return 0;
// }



//4- USANDO scanf() PARA LEER CARACTERES DESDE TECLADO

#include <stdlib.h>
#include <stdio.h>

int main()
{
    char caracter;
    printf("Ingrese un caracter: ");
    scanf(" %c", &caracter); //se añade un espacio antes de %c para ignorar espacios en blanco y saltos de linea
    printf("El caracter ingresado es: %c\n", caracter);
    
    system("pause");
    return 0;

}