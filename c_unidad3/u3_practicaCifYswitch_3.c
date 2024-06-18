/*3- Dado un número introducido por el usuario, indicar si este es positivo, negativo o nulo*/

#include <stdlib.h>
#include <stdio.h>

int main (){
    float nro;

    printf("Ingrese un numero\n");
    scanf("%f", &nro);
    if(nro==0){
        printf("El numero ingresado es nulo\n");
    }else {
        if(nro>0){
            printf("El numero ingresado es positivo\n");
        } else {
            printf("El numero ingresado es negativo\n");
        }
    }

system ("pause");
return 0;

}