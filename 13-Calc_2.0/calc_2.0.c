#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    float num1, num2, result;
    char op = '0';

    do
    {
        num1 = num2 = result = 0;

        printf("selecione a operacao: \n");
        printf("(1) Soma\t");
        printf("(2) Subtracao\t");
        printf("(3) Multiplicacao\t");
        printf("(4) Divisao\n\t");
        // scanf("%d", &op);
        op = getche();
        printf("\n");

        if (op != '0')
        {
            printf("Digite um numero: \n\t ");
            scanf("%f", &num1);

            printf("Digite o segundo numero: \n\t");
            scanf("%f", &num2);

            if (op == '1')
            {
                result = num1 + num2;
            }
            else if (op == '2')
            {
                result = num1 - num2;
            }
            else if (op == '3')
            {
                result = num1 * num2;
            }
            else if (op == '4')
            {
                result = num1 / num2;
            }
        }

        printf("O resultado e: %f\n\n", result);

        system("pause");
        system("cls");

    } while (op != '0');

    return 0;
}