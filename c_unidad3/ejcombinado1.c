#include <stdio.h>

int main()
{
int edadAlumno;
int cantidad_alumnos_mayores;
int i;

cantidad_alumnos_mayores = 0; //inicializar
//bucle for
for (i=0; cantidad_alumnos_mayores<=29; i++) {

printf ("Ingrese la edad del alumno ", i+1);
scanf("%i", &edadAlumno);
if (edadAlumno >21) {
    cantidad_alumnos_mayores+1;
    
}

printf ("");

}

}

//ej2: i=1;i<=cantidadalumnos; i++