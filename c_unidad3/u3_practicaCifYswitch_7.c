//7- Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >= 100000 y un 10% si es menor. Validar que la venta sea mayor que 0, caso contrario informar dicha situación

#include <stdlib.h>
#include <stdio.h>

int main (){
    float valor_venta;

    printf("Ingrese el valor de la venta\n");
    scanf("%f", &valor_venta);

    if (valor_venta > 0){
        if (valor_venta >= 100000) {
             valor_venta * 0.85;
        } 
        else {valor_venta = valor_venta * 0.90;
        } 
        printf ("El valor final de la venta es $ %0.2f\n", valor_venta);
    } else {
        printf ("El valor debe ser distinto de 0\n");
    }

system("pause");
return 0;

}