#include <stdio.h>
#include <stdlib.h>

int main()
{

    int child, teen, adult;
    child = 12;
    teen = 18;
    adult = 59;
    

    int yearsOld = 0;
    printf("Digite a idade de uma pessoa: \n");
    scanf("%d", &yearsOld);

    if (yearsOld <= child)
    {
        printf("there's a child.\n");
    }
    else if (yearsOld > child && yearsOld <= teen)
    {
        printf("there's a teenager\n");
    }
    else if (yearsOld > teen && yearsOld <= adult)
    {
        printf("there's an adult(midle Age)\n");
    }
    else
    {
        printf("there's an old people\n");
    }

    return 0;
}