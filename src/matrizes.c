#include <stdio.h>

int main () 
{
    
    int mat[2][3];
    int par = 0;
    int impar = 0;

    for(int linha = 0; linha < 2; linha++)
    {
        for(int coluna = 0; coluna < 3; coluna++)
        {
            printf ("\nElemento[%d][%d] = ", linha, coluna);
            scanf("%d", &mat[linha][coluna]);

            if(mat[linha][coluna]%2 == 0)
            {
                par++;
            }
            else
            {
                impar++;
            }
        }
    }

    printf("Número de pares: %d\n", par);
    printf("Número de ímpares: %d\n", impar);
    

    int valores[3][3];

    for (int lin = 0; lin < 2; lin++)
    {
        for (int col = 0; col < 2; col++)
        {
            if(col == lin)
            {
                printf("Valor padrão 0 atribuído para linha %d e coluna %d\n", lin, col);
                valores[lin][col] = 0;
            }
            else
            {
                printf("Digite um valor para a linha %d e coluna %d: ", lin, col);
                scanf("%d", &valores[lin][col]);
            }
        }
    }
    

    int matriz[3][3];
    int novaMatriz[3][3];

    for(int linh = 0; linh < 2; linh++)
    {
        for(int colu = 0; colu < 2; colu++)
        {
            printf("Digite um número para a linha %d e a coluna %d: ", linh, colu);
            scanf("%d", &matriz[linh][colu]);
            novaMatriz[colu][linh] = matriz[linh][colu];
        }
    }
    

    int matUm[5][5];

    for(int a = 0; a <= 4; a++)
    {
        for(int b = 0; b <= 4; b++)
        {
            if(a == b)
            {
                matUm[a][b] = 0;
            }
            else
            {
                matUm[a][b] = 1;
            }
        }
    }

    for(int c = 0; c <= 4; c++)
    {   
        for(int d = 0; d <= 4; d++)
        {
            printf("%d", matUm[c][d]);
        }

        printf("\n");
    }
    

    return 0;
}