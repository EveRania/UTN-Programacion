// 6- Leer una nota de un alumno por consola e informar la condición del mismo. (menor que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado). Validar que la nota ingresada se encuentre entre el 0 y el 10, de lo contrario informar "Nota inválida".

#include <stdlib.h>
#include <stdio.h>

int main()
{
    float nota_alumno;

    printf("Ingrese la nota del alumno\n");
    scanf("%f", &nota_alumno);

    if (nota_alumno >= 0 && nota_alumno <= 10)
    {
        if (nota_alumno < 4)
        {
            printf("Reprobado\n");
        }
        else if (nota_alumno < 6)
        {
            printf("Regular\n");
        }
        else if (nota_alumno >= 6)
        {
            printf("Promocionado\n");
        }
    } else {
        printf("Nota invalida\n");
    }


   system("pause")  ;
   return 0;
}
