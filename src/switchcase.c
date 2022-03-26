#include <stdio.h>

int main () 
{
    printf("Estruturas switch só recebem int, char e long!\n");

    int condicaoInt = 1;
    
    switch(condicaoInt)
    {
        case 1: printf("Nesse switch Caso 1 encontrado!\n");
        break;

        case 2: printf("Caso 2 encontrado!\n");
        break;

        default: printf("Caso default encontrado!\n");
        break;
    }

    return 0;
}