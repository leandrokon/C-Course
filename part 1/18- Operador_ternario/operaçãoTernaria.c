#include <stdio.h>
#include <stdlib.h>

int main() {

    char caractere = 0;
    int codigo = 0;
    printf("Digite uma letra entre A e G: \n");
    scanf("%c", &caractere);

//------------------  switch ----------------------
/*
   switch (caractere) {
        case 'A':
            codigo = 65;
            break;
        case 'B':
            codigo = 66;
            break;
        case 'C':
            codigo = 67;
            break;
        case 'D':
            codigo = 68;
            break;
        case 'E':
            codigo = 69;
            break;
        case 'F':
            codigo = 70;
            break;
        case 'G':
            codigo = 71;
            break;
        default:    
            codigo = -1;
    }    
*/
//-------------- ternario --------------------------------

    codigo = (caractere == 'A') ? 65 : 
             (caractere == 'B') ? 66 : 
             (caractere == 'C') ? 67 : 
             (caractere == 'D') ? 68 : 
             (caractere == 'E') ? 69 : 
             (caractere == 'F') ? 70 : 
             (caractere == 'G') ? 71 : -1;

    printf("\nO codigo ASCII da letra digitada e: %i \n", codigo);

    return 0;
}