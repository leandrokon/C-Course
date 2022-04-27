#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, num2;

    printf("Digite um numero: \n");
    scanf("%d", &num);
    /*
    if(num < 0) {
        num2 = 0;               //intrução feita usando if/else.
    } else {
        num2 = num;
    }
    */
 //----------------------------------//

    num2 = (num < 0) ? 0 : num;     // instrução ternaria.

    printf("\nO valor de num2 eh: %d\n", num2);
    return 0;
}