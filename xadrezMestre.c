#include <stdio.h>

// Olá, Tudo Bem ?!
// O objetivo deste programa é simular o movimento das peças de xadrez, Torre, Bispo, Rainha e Cavalo utilizando estruturas de repetição, recursividade e loops aninhados.

// função recursiva para o movimento da Torre (Direita)

void moverTorre(int casas) {
    if (casas == 0) {
        return;
    }
    printf("-> Direita.\n");
    moverTorre(casas - 1);
}

// função recursiva para o movimento do Bispo (Cima Direita) + loops aninhados

void moverBispo(int casas) {
    if (casas == 0) {
        return;
    }

    // Loop externo (vertical)

    for (int i = 0; i < 1; i++) {
        printf("-> Cima Direita.\n");
    }

    moverBispo(casas - 1);  //  Esta chamada estava fora da função no seu código. Corrigido.
}

// função recursiva para o movimento da Rainha (Esquerda)

void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }
    printf("-> Esquerda.\n");
    moverRainha(casas - 1);
}

// Função para o movimento do Cavalo (2 cima + 1 Direita) com loops aninhados e controle de fluxo 

void moverCavalo(int cima, int direita) {

    // Movimento em L: 2 cima + 1 direita

    for (int i = 0; i < cima; i++) {
        if (i == 2) {
            break; // Limitar o movimento vertical a 2 casas
        }
        printf("-> Cima.\n");
    }

    for (int j = 0; j < direita; j++) {
        if (j > 0) {
            continue; // Só permitir 1 movimento para direita
        }
        printf("-> Direita.\n");
    }
}

int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int cimaCavalo = 2;
    int direitaCavalo = 1;

    printf("BEM-VINDO AO PROGRAMA DE SIMULAÇÃO DE MOVIMENTO DE PEÇAS DE XADREZ!!!\n");

    printf("\n");

    // Movimento da torre 

    printf("Movimento da torre: \n");
    moverTorre(casasTorre);  //  Usando função recursiva no lugar do loop

    printf("\n");

    // Movimento do Bispo

    printf("Movimento do Bispo: \n");
    moverBispo(casasBispo);  //  Usando função recursiva no lugar do loop

    printf("\n");

    // Movimento da Rainha

    printf("Movimento da Rainha: \n");
    moverRainha(casasRainha);  //  Usando função recursiva no lugar do loop

    printf("\n");

    // Movimento do Cavalo
    
    printf("Movimento do Cavalo: \n");
    moverCavalo(cimaCavalo, direitaCavalo);  //  Função com loops complexos

    return 0;
}
