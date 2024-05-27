#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombres[10][50];
    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese el nombre %d\n", i + 1);
        // scanf("%s", &nombres[i]); // esto no me toma los nombres compuestos
        fgets(nombres[i], sizeof(nombres[i]), stdin);
        //el caracter enter tambien queda almacenado 
     // Eliminar el salto de línea al final de la cadena
    nombres[i][strcspn(nombres[i], "\n")] = '\0';
    //le digo que donde esta el \n y que lo reemplace por \0
    
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", nombres[i]);
    }
}
