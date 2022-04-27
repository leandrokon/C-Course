#include <stdio.h>
#include <stdlib.h>

int main() {

/*  enquanto(true) {
        imprime(1);
    }
*/
    int i = 0;
    while (i <=10) {
        printf("%d\n", i);
        i = i + 1;
    }
//######################## OUTRO EXEMPLO ##################
    int x = 0;
    int digitedValue = 0;

    printf("Informe quantas veses vamos repetir: \n");
    scanf("%d", &digitedValue);

    while(x < digitedValue) {
        printf("%d\n", x * 1);
        x = x + 1;
    }
    return 0 ;
}