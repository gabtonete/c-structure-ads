#include <stdio.h>

int main()
{
    printf("Tema 4 - If/else and switch/case\n");
    int condicaoInt = 1;
    int condicaoInt2 = 0;

    if(condicaoInt)
    {
        printf("Condição verdadeira!\n");
        if(condicaoInt2)
        {
            printf("Condição 2 verdadeira\n");
        }
        else
        {
            printf("Condição 2 falsa\n");
        }
    }
    else
    {
        printf("Condição falsa!\n");
    }

    return 0;
}