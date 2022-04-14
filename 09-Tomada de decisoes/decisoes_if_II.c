#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;

    printf("Digite um numero != 5: \n");
    scanf("%d", &i);

    if (i!=5) {
        printf("TRUE");
    }else {
        printf("FALSE");
    }
    
    
    return 0;
}
