#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        for (parte1, parte2, parte3){
            parte1 -> declarar e iniciar a variável
            parte2 -> é a condição.
            parte3 -> modificar a variável (incrementar/ decrementar).
        }
    */
   for (int i = 0; i <= 10; i++) {
//para -> i de inteiro -> enquanto i <= 10 -> incremente i. { faça (imprime i na tela) }
       printf("%d  ", i);
       
   }
printf("\n");
    for(int a=0, b=10;a<=10;a++, b--) {
        printf("%d - %d\n", a, b);
    }

    return 0;
}