#include <stdio.h>

void main () {
    puts("Hello world!");

    int cont = 0;
    cont = cont + 1;

    char escolha;
    escolha = 'D';
    escolha = escolha - 2;

    int a, b, c, d;
    a = 10;
    b = a + 1;
    c = b + 1;
    d = c + 1;
    a = b = c = d = 20;
    printf("Cont = %d\nEscolha = %c\nVariável C = %d\n", cont, escolha, c);

    float dividendo;
    int divisor;
    
    printf("Entre com dois numeros reais:\n");
    
    scanf("%f %d", &dividendo, &divisor);
    printf("A divisao de %.2f por %d vale %.2f\n", dividendo, divisor, dividendo/divisor);
    
    
    char ch1, ch2;
    
    printf("Entre com duas letras:\n");
    
    scanf(" %c", &ch1);
    scanf(" %c", &ch2);


    printf("As letras inseridas foram %c e %c.\n", ch1, ch2);
    
}