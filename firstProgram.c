#include <stdio.h>

int main(){
    char tipoChar = 'a';
    int tipoInt = 1;
    float tipoFloat = 1.55;
    double tipoDouble = 1.55;

    char tipoCharComAscii = 72; // representa o 'H'
    char tipoCharComHexadecimal = 0x41; // representa o 'A' em hexadecimal

    printf("Ola mundo., %c, %d, %f, %f, %c, %c\n", 
        tipoChar, 
        tipoInt, 
        tipoFloat, 
        tipoDouble, 
        tipoCharComAscii, 
        tipoCharComHexadecimal
    );

    return 0;
}
