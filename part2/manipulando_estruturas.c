#include <stdio.h>
#include <stdlib.h>

int main()
{
    // definir estrutura............

    struct horario
    {
        int horas;    // define a estrutura, sendo essa
        int minutos;  // uma estrutura do tipo horario, que
        int segundos; // contem tres variaveis de tipo "int" (inteiros).
        double test;  // uma variável tipo "double"
        char letra;   // variável tipo "char"
    };
        //chamar a estrutura "agora".
    struct horario agora; // declarou uma estrutura do tipo
                          // horario, com nome de "agora".

    agora.horas = 10;    // modificou o valor de horas dentro da estrutura para "10".
    agora.minutos = 20;  // modificou o valor de minutos dentro da estrutura para "20".
    agora.segundos = 30; // modificou o valor de segundos dentro da estrutura para "30".

    printf("%d:%d:%d\n", agora.horas, agora.minutos, agora.segundos);
            //chamar a estrutura "depois".
    struct horario depois;
    
        depois.horas = agora.horas + 10;   //operação matemática entre as estruturas.
        depois.minutos = agora.minutos;   //usando os mesmos valores de outra estrutura.
        depois.test = 90.65 / 5 + 25 - 15 * 5;  // adicionando variaveis de outros tipos.
        depois.letra = 'A';    //adicionando strings.
    
    printf("%d\n%d\n%f\n%c\n", depois.horas, depois.minutos, depois.test, depois.letra);
    return 0;
}