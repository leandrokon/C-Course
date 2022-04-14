#include <stdio.h>
#include<stdlib.h>

int main(){

    int tabuada = 0;
    printf("\nDigite a tabuada que voce deseja\n >>>>>");
    scanf("%d", &tabuada);

    for(int i=1; i<=10; i++) {
        printf("%dx%d = %d\n", i, tabuada, tabuada * i);
    }
    return 0;
}