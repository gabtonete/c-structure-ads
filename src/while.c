#include <stdio.h>
#include <stdlib.h>

int main()
{      
    int i = 2, maiorNumero = 0, contador = 1;
    int digitado;
    while(i != 0)
    {
        printf("Digite um número: ");
        scanf("%d", &digitado);
        if(digitado > maiorNumero)
        {
            maiorNumero = digitado;
        }
        
        contador++;
        if(contador == 4)
        {
            i = 0;
        }
    }

    printf("O maior número é: %d\n", maiorNumero);

    return 0;
}