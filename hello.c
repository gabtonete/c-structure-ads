#include <stdio.h>

int main(){
    // TIPOS PRIMITIVOS EM C
    char tipoChar = 'a';
    int tipoInt = 1;
    float tipoFloat = 1.55;
    double tipoDouble = 1.55;

    // Char usando hexadecimal
    char tipoCharComAscii = 72; // representa o 'H'
    char tipoCharComHexadecimal = 0x41; // representa o 'A' em hexadecimal

    // Atribuição de variáveis em uma string usando control string
    printf("Os tipos primitivos são:\nChar: %c\nInt: %d\nFloat: %f\nDouble: %f\nChars usando Ascii e Hexadecimal:%c, %c\n\n", 
        tipoChar, 
        tipoInt, 
        tipoFloat, 
        tipoDouble, 
        tipoCharComAscii, 
        tipoCharComHexadecimal
    );

    // OPERADORES
    int a, b;

    a = 6; b = 3;
    int soma  = a + b;
    int subtracao = a - b;
    int mult = a * b;
    int div = a / b;
    int modulo = a % b;
    printf("Operadores matemáticos: Soma: %d, Subtração: %d, Multiplicaçao: %d, Divisão: %d, Módulo: %d \n", soma, subtracao, mult, div, modulo);

    printf("Operadores lógicos: && e ||\n");

    printf("Operadores bitwise: Analisam os 0's e 1's de uma variável e faz operações de & ou ||\n");

    printf("Atribuição '='\n");
    return 0;
}
