#include <stdio.h>

// Função recursiva para mover a torre para a direita
void moverTorre(int passos) {
    if (passos == 0) {
        return;
    }
    printf("Direta\n");
    moverTorre(passos - 1);
}

// Função recursiva para mover o bispo na diagonal
void moverBispo(int passos) {
    if (passos == 0) {
        return;
    }
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(passos - 1);
}

// Função recursiva para mover a rainha para a esquerda
void moverRainha(int passos) {
    if (passos == 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Função recursiva para mover o cavalo
void moverCavalo(int passos) {
    if (passos == 0) {
        return;
    }
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    printf("Direita\n");
    moverCavalo(passos - 1);
}

int main() {
    // mover a torre 5 casas para a direita
    moverTorre(5);

    // mover o bispo 5 casas na diagonal direita e para cima
    moverBispo(5);

    // mover a rainha 8 casas para a esquerda
    moverRainha(8);

    // mover o cavalo enquanto for maior que zero
    moverCavalo(1);

    return 0;
}