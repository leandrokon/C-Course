#include <stdio.h>
#include <stdlib.h>

int main() {
  /*
    switch( expressão ) {
        case-01 (true): 
        break;
        case-02 (true): 
        break;
        default:  
            \\não necessita break.
    }
  */ 
    int i;
    printf("Digite um valor entre 0 e 5\n");
    scanf("%d", &i);

    switch(i) {
        case 0: 
        printf("Voce digitou 'zero' %d.", i);
        break;
        case 1: 
        printf("Voce digitou 'um' %d.", i);
        break;
        case 2: 
        printf("Voce digitou 'dois' %d.", i);
        break;
        case 3: 
        printf("Voce digitou 'tres' %d.", i);
        break;
        case 4: 
        printf("Voce digitou 'quatro' %d.", i);
        break;
        case 5: 
        printf("Voce digitou 'cinco' %d.", i);
        break;
        default:
        printf("Voce nao digitou o que foi pedido.  %d.", i);
    }
    return 0;
}