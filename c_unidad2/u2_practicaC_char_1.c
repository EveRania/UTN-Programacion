/*Práctica en C – Tipo de dato char
1- Imprimir los caracteres 'A', 'B', 'C' y sus códigos ASCII correspondientes.*/

#include <stdlib.h>
#include <stdio.h>

int main()
{

    char letraA = 'A';
    char letraB = 'B';
    char letraC = 'C';

    printf("El codigo ASCII de %c es %i\n El codigo ASCII de %c es %i\n El codigo ASCII de %c es %i\n", letraA, letraA, letraB, letraB, letraC, letraC);

    system("pause");
    return 0;
}