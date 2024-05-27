#include <stdio.h>

void main()
{
    int comision[3][10];
    int aplazado[3][10] = {0}; // Matriz para mantener registro de alumnos aplazados
    float promedioComision1, promediComision2, promedioComision3, promedioTotal;
    int aplazos = 0, regulares = 0, aprobados = 0, opcion;

    do
    {
        printf("1. Cargar notas alumnos por comisión\n2. Promedio por Comision\n3. Promedio de la materia\n4. Cantidad de aplazos en la materia\n5. Cantidad de regularizados en la materia\n6. Cantidad de aprobados en la materia\n7. Salir\n");
        scanf("%d", &opcion);

        if (opcion == 1)
        {
            for (int i = 0; i < 3; i++)
            {
                printf("Cargando la comision %d ", i + 1);
                for (int j = 0; j < 10; j++)
                {
                    do
                    {
                        printf("Ingrese la nota del alumno %d: ", j + 1);
                        scanf("%d", &comision[i][j]);

                        if (comision[i][j] < 5 && comision[i][j] > 0 && !aplazado[i][j])
                        {
                            aplazos++;
                            aplazado[i][j] = 1; // Marcar al alumno como aplazado
                        }
                        else if (comision[i][j] >= 5 && comision[i][j] < 7)
                        {
                            regulares++;
                        }
                        else if (comision[i][j] >= 7 && comision[i][j] <= 10)
                        {
                            aprobados++;
                        }
                        else
                        {
                            printf("La nota ingresada debe estar entre 1 y 10\n");
                        }
                    } while (comision[i][j] < 1 || comision[i][j] > 10);
                }
            }
        }
        else if (opcion == 4)
        {
            printf("\nLos cantidad de alumnos aplazados son %d\n", aplazos);
        }

    } while(opcion!=7);
}
