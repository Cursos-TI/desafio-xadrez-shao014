#include <stdio.h>


int main() {
    
    int torre = 0;
    int bispo = 5;
    int rainha = 0;
    int cavalo = 1;

    // mover a torre 5 casas para a direita
    for (torre = 0; torre < 5; torre++) {
        printf("Direta\n"); // imprime o movimento para direita.
    }

    // mover o bispo 5 casas na diagonal direita e para cima.
     while (bispo > 0) { 
        for (int i = 0; i < 1; i++) {
            printf("Cima\n"); // imprime o movimento para cima duas vezes.
        }
        printf("Direita\n"); // imprime o movimento para direta uma vez.
        bispo--;
    }

    // mover a rainha 8 casas para a esquerda.
    rainha = 0; 
    do {
        printf("Esquerda\n"); // imprime o movimento para esquerda.
        rainha++;
    } while (rainha < 8);

    // mover o cavalo enquanto for maior que zero.
    while (cavalo > 0) { 
        for (int i = 0; i < 2; i++) {
            printf("Cima\n"); // imprime o movimento para cima duas vezes.
        }
        printf("Direita\n"); // imprime o movimento para direta uma vez.
        cavalo--;
    }

    return 0;
}