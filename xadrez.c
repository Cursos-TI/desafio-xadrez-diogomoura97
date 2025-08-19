#include <stdio.h>

int main() {

    printf("DESAFIO: NÍVEL NOVATO \n");
    printf(" \n ");

    printf("Movento a Torre 5 casas para a direita com loop for \n");
    printf(" \n ");

    for(int movimentotorre = 0;movimentotorre<5;movimentotorre++){
        printf("Direita-> %dª casa \n",movimentotorre+1);

    }
   

    //----------------------------------------------------------------------------------------------

     printf("Movento o Bispo 5 casas para a diagonal superior direita com loop while \n");
     printf(" \n ");

     int movimentobispo = 0;
     while (movimentobispo<5)
     {
        printf("Cima,Direita-> %dª casa \n",movimentobispo+1);
        movimentobispo++;
     }
   
     //----------------------------------------------------------------------------------------------

     printf("Movento a Rainha 5 casas para a direita com loop do-while \n");
     printf(" \n ");

     int movimentorainha = 0;
     do
     {
        printf("Esquerda-> %dª casa \n",movimentorainha+1);
        movimentorainha++;
     } while (movimentorainha<8);

    return 0;
}
