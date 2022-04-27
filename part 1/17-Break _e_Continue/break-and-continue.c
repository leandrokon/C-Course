#include <stdio.h>
#include <stdlib.h>


int main() {

    //break interrompe todo o nosso ciclo.
    //continue interrompe apenas o laço onde se encontra.

    for (int i = 0; i<= 10; i++) {
        //quando x ==2, interrompe apenas o laço atual.
        if (i == 2) {
            printf("-\n", i);
            continue;
        }
        //quando x ==8, interrompe todo o looping.
        if (i == 8) {
            printf("-\n", i);
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}