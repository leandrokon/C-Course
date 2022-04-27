#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;
    num1 = 15;
    num2 = 20;

    int soma = num1 + num2;
    printf("Soma: %d\n", soma);

    int subtracao = num1 - num2;
    printf("Subtracao: %d\n", subtracao);

    int multi = num1 * num2;
    printf("Multi: %d\n", multi);

    float divide = num1 / num2;
    printf("Divide: %f\n", divide);

    return 0;
}