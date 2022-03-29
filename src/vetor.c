#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiros[10];
    for(int i = 0; i < 10; i++)
    {   
        printf("Digite um número: ");
        scanf("%d", &inteiros[i]);
    }

    for(int z = 9; z >= 0; z--)
    {
        printf("%d\n", inteiros[z]);
    }
    

    float notas[6];
    for(int x = 0; x < 6; x++)
    {
        printf("Digite uma nota: ");
        scanf("%f", &notas[x]);
    }

    for(int n = 5; n >= 0; n--)
    {
        if(notas[n] >= 7 && notas[n] <= 10)
        {
            printf("%.2f\n", notas[n]);
        }
    }
    

    char cadeia[10];
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    for(int b = 0; b < 10; b++)
    {
        printf("Digite uma letra: ");
        scanf(" %c", &cadeia[b]);

        switch (cadeia[b])
        {
            case 'a':
                a++;
                break;
            case 'e':
                e++;
                break;
            case 'i':
                i++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;
            
            default:
                break;
        }    
    }

    printf("Vogais a: %d; Vogais e: %d; Vogais i: %d; Vogais o: %d; Vogais u: %d\n", a, e, i, o, u);
    

    int numeros[10];
    int novosNumeros[10];

    for(int f = 0; f < 10; f++)
    {
        printf("Digite um número: ");
        scanf("%d", &numeros[f]);

        if(numeros[f]%2 == 0)
        {
            novosNumeros[f] = numeros[f] - 1;
        }
        else
        {
            novosNumeros[f] = numeros[f] + 1;
        }
    }

    for(int g = 9; g >= 0; g--)
    {
        printf("%d\n", novosNumeros[g]);
    }
    

    
    int seis[6];
    int lista[3];
    int posVet = 0;
    int achado = 0;

    for(int h = 0; h < 6; h++)
    {
        printf("Digite um número para guardar no vetor: ");
        scanf("%d", &seis[h]);
    }

    for(int j = 0; j < 3; j++){
        posVet = 0;
        achado = 0;
        printf("\nDigite um número para procurar no vetor: ");
        scanf("%d", &lista[j]);

        while(posVet <= 5 && achado == 0) 
        {
            if(lista[j] == seis[posVet])
            {
                achado = achado + 1;
            }
            else
            {
                posVet = posVet + 1;
            }

            if(achado == 1)
            {
                printf("Encontrado na posição %d\n", posVet + 1);
            }
        }

        if(achado == 0)
        {
            printf("Número não encontrado.\n");
        }
    }
    

    int provas1[3];
    int provas2[3];
    int provas3[3]; 
    int mediaGeral = 0;
    int mediaProva1 = 0;
    int mediaProva2 = 0;
    int mediaProva3 = 0;
    int mediaAlunos[3];

    for(int m = 0; m < 3; m++)
    {
        printf("Aluno %d, prova 1: ", m + 1);
        scanf("%d", &provas1[m]);

        printf("Aluno %d, prova 2: ", m + 1);
        scanf("%d", &provas2[m]);

        printf("Aluno %d, prova 3: ", m + 1);
        scanf("%d", &provas3[m]);
    }

    for(int n = 0; n < 3; n++)
    {
        mediaGeral = mediaGeral + provas1[n] + provas2[n] + provas3[n];

        mediaProva1 = mediaProva1 + provas1[n];
        mediaProva2 = mediaProva2 + provas2[n];
        mediaProva3 = mediaProva3 + provas3[n];

        mediaAlunos[n] = provas1[n] + provas2[n] + provas3[n];
    }
    
    printf("\nMédia geral da escola: %d\n", mediaGeral / 9);

    for(int o = 0; o < 3; o++)
    {
        printf("Média do aluno %d: %d\n", o + 1, mediaAlunos[o] / 3);

    }
    
    printf("Média da prova 1: %d\n", mediaProva1 / 3);
    printf("Média da prova 2: %d\n", mediaProva2 / 3);
    printf("Média da prova 3: %d\n", mediaProva3 / 3);

    return 0;
}