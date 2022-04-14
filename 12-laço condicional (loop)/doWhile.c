#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    /*
    faça { isso
    }enquanto ( true );
    */

   int counter = 0;
   char c;

   do {
       counter += 1;
       printf("Digite 0 para sair do looping\n");
       printf("passou %d veses pelo looping.\n", counter);
       c = getchar();
   } while ( c != '0');
    return 0;
}