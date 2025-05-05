#include <stdio.h>

// Olá, Tudo Bem ?!
// O objetivo deste programa é simular o movimento das peças de xadrez, Torre, Bispo, Rainha e Cavalo usando estruturas de repetição.


int main() {

    int i;
    int baixo = 2;
    int esquerda = 1;


    printf("BEM-VINDO AO PROGRAMA DE SIMULAÇÃO DE MOVIMENTO DE PEÇAS DE XADREZ!!!\n");

    printf("\n");

    
    // Movimento da torre 

    printf("Movimento da torre: \n");
    for (i = 0; i < 5; i++) 
    {
        printf("-> Direita.\n");
    }

    printf("\n");

    // Movimento do Bispo

    printf("Movimento do Bispo: \n");
    i = 0;
    while (i < 5) 
    {
        printf("-> Cima Direita.\n");
        i++;
    }

    printf("\n");

    // Movimento da Rainha

    printf("Movimento da Rainha: \n");
    i = 0;
    do {
        printf("-> Esquerda.\n");
        i++;
    } while (i < 8);

    printf("\n");

    // Movimento do Cavalo

    printf("Movimento do Cavalo: \n");
    
    for (i = 0; i < baixo; i++)
    {
        printf("-> Baixo. \n");
    }

        i = 0;
        while (i < esquerda)
    {
        printf("-> Esquerda. \n");
        i++;
    }

    return 0;
}