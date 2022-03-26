#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, recebido;
    int maiorNumero = 0;
    int contador = 1;
    do
    {
        printf("Digite um número: ");
        scanf("%d", &recebido);

        if(recebido > maiorNumero)
        {
            maiorNumero = recebido;
        }

        contador++;
        if(contador == 5)
        {
            i = 0;
        }
    }
    while(i != 0);

    printf("O maior número digitado foi: %d\n", maiorNumero);

    return 0;
}