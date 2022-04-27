#include <stdio.h>
#include <stdlib.h>

int main()
{

    float nota1, nota2, nota3, nota4, media;
    nota1 = nota2 = nota3 = nota4 = media = 0;

    printf("Digite as notas do aluno: \n");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("A media do aluno e: %f, ", media);

    if (media >= 7)
    {
        printf("O aluno esta aprovado");
    }
    else
    {
        printf("O aluno esta reprovado");
    }
    return 0;
}