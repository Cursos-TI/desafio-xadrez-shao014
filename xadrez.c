#include <stdio.h>


int main() {

   //mover a torre 5 casas para a direita.
   int torre, bispo, rainha;

   for ( torre = 0; torre < 5; torre++)
   {
    printf("Direta\n"); // imprime a direção do movimento.
   }
   
   //mover o bispo 5 casas para a diagonal na direção direita e para cima.
   while (bispo < 5)
   {
    printf("diagonal: Cima e direta\n"); // imprime a direção do movimento.
    bispo++;
   }
   
   // mover a rainha 8 casas para a esquerda.
   do {
    printf("Esquerda\n"); //impreme a direção do movimento.
    rainha++;
   } while (rainha <8);

    return 0;
}
