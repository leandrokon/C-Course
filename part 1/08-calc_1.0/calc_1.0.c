#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, div,soma, subtracao, multi; 

    
    printf("Calculadora 1.0\n");
    printf("digite 2 numeros:\n");
    scanf("%f %f", &num1, &num2);

    soma = num1 + num2;;
    subtracao = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;

    printf("Soma: %f\n", soma);
    printf("Subtracao: %f\n", subtracao);
    printf("Multiplicacao: %f\n", multi);
    printf("Divisao: %f\n", div);

    return 0;
}