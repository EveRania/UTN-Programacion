// 8- Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el saldo sea mayor o igual que el importe a retirar.

#include <stdlib.h>
#include <stdio.h>

int main()
{
    float saldo, retiro;
    saldo = 150000;

    printf("Su saldo disponible es $%.2f. Ingrese el importe a retirar\n", saldo);
    scanf("%f", &retiro);

    if (retiro > saldo)
    {
        printf("Fondos insuficientes");
    }
    else
    {
        saldo = saldo - retiro;
        printf("Su saldo actualizado es $%.2f", saldo);
    }

    system ("pause");
    return 0;
}