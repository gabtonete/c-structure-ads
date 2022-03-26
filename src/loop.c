#include <stdio.h>

int main () 
{
    printf("Tema 5 - Estruturas de repetição (while, do while e for)\n");
    printf("Digite um número: ");
    int lido = 0;
    //scanf(" %d", &lido);

    for (int i = 1; i <= 5; i++)
    {
        printf("\n%d O valor lido é %d\n", i, lido);
    }

    int digitado; int numPadrao = 0;
    
    for (int i = 1; i <= 5; i++)
    {   
        printf("Digite um número: ");
        scanf("%d", &digitado);

        if(digitado > numPadrao)
        {
            numPadrao = digitado;
        }
    }
    

    printf("O maior número digitado foi %d\n", numPadrao);

    float salarioDigitado, salarioMaisAlto = 0, mediaDosSalarios, somaDosSalarios = 0;

    for(int i = 1; i <= 5; i++)
    {
        printf("Digite um salário: ");
        scanf("%f", &salarioDigitado);

        somaDosSalarios += salarioDigitado;

        if(salarioDigitado >= salarioMaisAlto)
        {
            salarioMaisAlto = salarioDigitado;
        }
    }

    mediaDosSalarios = somaDosSalarios / 5;

    printf("O salário mais alto é de: %f\n", salarioMaisAlto);
    printf("A média salarial é de: %f\n", mediaDosSalarios);
    

    float notaRecebida = 0, somaDaNota;
    float mediaDaNota;
    for (int i = 1; i <= 2; i ++)
    {
        for(int z = 1; z <= 3; z++)
        {
            printf("Digite a nota %d para o aluno %d: ", z, i);
            scanf("%f", &notaRecebida);
            somaDaNota += notaRecebida;
        }

        mediaDaNota = somaDaNota / 3;

        printf("Média do aluno %d foi de %.2f. ", i, mediaDaNota);
        if(mediaDaNota >= 7)
        {
            printf("Aluno aprovado!\n");
        }
        else
        {
            printf("Aluno reprovado!\n");
        }
        mediaDaNota = 0;
        somaDaNota = 0;
    }
    

    float reajuste, salarioRecebido, salarioNovo, salarioPadrao = 0, funcionario;
    printf("Reajuste do salário: ");
    scanf("%f", &reajuste);
    printf("Reajuste de %.2f%% cadastrado!\n", reajuste);

    for(int i = 1; i <= 3; i++)
    {
        printf("Digite o salário do funcionário %d: ", i);
        scanf("%f", &salarioRecebido);

        salarioNovo = salarioRecebido + (salarioRecebido * (reajuste/100));
        printf("O funcionário %d terá um salário novo de: %f\n", i, salarioNovo);
        if(salarioNovo > salarioPadrao)
        {
            funcionario = i;
            salarioPadrao = salarioNovo;
        }
    }

    printf("O maior salário pertence ao funcionário %f e é de %f.\n", funcionario, salarioPadrao);
    

    int quantidade;
    printf("Quantos números serão recebidos? ");
    scanf("%d", &quantidade);

    int numeroRecebido, numeroPar = 0, numeroImpar = 0;

    for(int i = 1; i <= quantidade; i++)
    {
        printf("Digite o número: ");
        scanf("%d", &numeroRecebido);


        if(numeroRecebido % 2 == 0)
        {
            numeroPar += numeroRecebido;
        }
        else
        {
            numeroImpar += numeroRecebido;
        }
    }

    printf("A soma dos números pares foi de: %d\n", numeroPar);
    printf("A soma dos números ímpares foi de: %d\n", numeroImpar);

    return 0;
}