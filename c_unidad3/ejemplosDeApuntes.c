// 1- EJEMPLO IF: REALIZAR UN PROGRAMA QUE APLIQUE UN DESCUENTO DEL 10% AL TOTAL DE UNA VENTA, SI LA MISMA SUPERA LOS $5600 //

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     float venta;
//     printf("Ingresa el monto de la venta\n");
//     scanf("%f", &venta);

//     if(venta > 5600)
//     {
//         venta = venta - (venta * 0.10);
//     }

//     printf("El total a pagar es: %0.2f \n", venta); //0.2 antes de f significa que redondee a dos decimales

//     system("pause");
//     return 0;
// }

// 2-  EJEMPLO 2 ESTRUCTURA CONDICIONAL COMPUESTA(IF else): Realizar un programa que aplique un descuento del 10% al ttoal de una venta si la misma supera los $5600 y un descuento del 5% en caso contrario.

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     float venta;

//     printf("Ingrese el monto de la venta:\n");
//     scanf("%f", &venta);

//     if(venta > 5600)
//     {
//         venta = venta - (venta * 0.10);
//     } else
//     {
//         venta = venta - (venta * 0.05);
//     }
//     printf("El total a pagar es: %0.2f \n", venta);
//     system("pause");
//     return 0;

// }

// 3- EJEMPLO VARIOS IF: condicion promocionado, regular o reprobado

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int nota = 5;

//     if (nota >= 7)
//     {
//         printf("Promocionado\n");
//     }
//     else if (nota >= 4)
//     {
//         printf("Regular\n");
//     }
//     else
//     {
//         printf("Reprobado\n");
//     }

//     system("pause");
//     return 0;
// }

// 4- EJEMPLOS VARIOS IF: saber si alguien es mayor o menor de edad

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     char inicial = 'I';
//     int edad = 19;

//     if (inicial != 'I')
//     {
//         printf("No se llama I\n");
//     }
//     else
//     {
//         if (edad >= 18)
//         {
//             printf("I es mayor de edad\n");
//         }
//         else
//         {
//             printf("I es menor de edad\n");
//         }
//     }

//     system ("pause");
//     return 0;
// }

// 5- SWITCH-Estructura condicional multiple

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     char letra = 'b';

//     switch (letra)
//     {
//         case 'a':
//         printf("Letra a.\n");
//         break;
//         case 'b':
//         printf("Letra b.\n");
//         break;
//         case 'c':
//         printf("Letra c.\n");
//         break;
//         default:
//         printf("Letra no contemplada.\n");
//         break;
//     }
//     system("pause");
//     return 0;
// }

// 6- FOR (sabemos la cantidad de repeticiones): Realizar un programa que calcule la suma de 10 numerps reales ingresados por teclado. Informar el resultado.

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     float numeroIngresado;
//     float suma = 0;

//     for (int i = 1; i <= 10; i++)
//     {
//         printf("Ingrese el nro. %i: \n", i);
//         scanf("%f", &numeroIngresado);

//         suma = suma + numeroIngresado;
//     }

//     printf("La suma es = %0.2f \n", suma);

//     system("pause");
//     return 0;
// }

// 7- if

// #include <stdio.h>
// #include <stdlib.h>
// #define MAX_SRTLEN 256 // defino una cte global, la max cantidad de caracteres que puedo usar en esta constante es 256 porque si no lo hago me va a tomar un solo caracter.

// int main()
// {
//     int edad;
//     char nbre_ape[MAX_SRTLEN];
//     printf("Ingrese nombre y apellido de la persona\n");
//     scanf("%s", nbre_ape);
//     printf("Ingrese la edad de la persona\n");
//     scanf("%i", &edad);
//     if (edad < 18)
//     {
//         printf("Advertencia: la persona es menor de edad\n");
//     }
//     printf("La persona ingresada es: %s (%i años)\n", nbre_ape, edad); // reemplaza al primer porcentaje por la primera y el segundo porcentahe por la segunda variables

//     system("pause");
//     return 0;
// }