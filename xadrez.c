#include <stdio.h>


int main() {
    
   int torre, bispo, rainha;

   for ( torre = 0; torre < 5; torre++)
   {
    printf("Direta\n");
   }
   
   while (bispo < 5)
   {
    printf("diagonal: Cima e direta\n");
    bispo++;
   }
   
   do {
    printf("Esquerda\n");
    rainha++;
   } while (rainha <8);

    printf("Fim do jogo!");

    return 0;
}
