#include <stdio.h>
#include <stdlib.h>

/*
    struct nome_da_estrutura {
        tipo_do_campo1 nome_do_campo1;
        tipo_do_campo2 nome_do_campo2;
        tipo_do_campo3 nome_do_campo3;
        ...
    };
    ----------------------------------------------------------------

    struct boletim (
        char nome_do_aluno(50);
        char nome_disciplina(50);
        int qtd_faltas;
        float nota1;
        float nota2;
        float nota_exame;
    );
*/

int main()
{
    //definir estrutura............

    struct horario
    {
        int horas;            //define a estrutura, sendo essa 
        int minutos;          // uma estrutura do tipo horario, que
        int segundos;         // contem tres variaveis de tipo "int" (inteiros).
    };

    //declarar estrutura............

    struct horario agora;   // declarou uma estrutura do tipo 
                            // horario, com nome de "agora".
    
    agora.horas = 10; // modificou o valor de horas dentro da estrutura para "10".
    agora.minutos = 20; // modificou o valor de minutos dentro da estrutura para "20".
    agora.segundos = 30; // modificou o valor de segundos dentro da estrutura para "30".

    //mostrar valores da estrutura............

    printf("%d:%d:%d", agora.horas, agora.minutos, agora.segundos);
    return 0;
}