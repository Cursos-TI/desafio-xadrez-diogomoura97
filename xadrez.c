#include <stdio.h>

int main() {
    
    printf("DESAFIO: NÍVEL AVENTUREIRO \n");
    printf(" \n ");

    printf("Movento o cavalo 2 casas para baixo e uma casa para a esquerda com loop for aninhado \n");
    printf(" \n ");
 
    for (int repeticoesLoop=0; repeticoesLoop<1; repeticoesLoop++){ //Número de repetições do loop

      for (int repeticoesCondicao = 0; repeticoesCondicao<2; repeticoesCondicao++) //Número de repetições da condição, para que o loop principal volte a repetir (caso haja mais de uma repetição)
      {
         printf("Baixo\n");
      }

      printf("Esquerda\n");
   }

   //----------------------------------------------------------------------------------------------

   printf("Movento o cavalo 2 casas cima e uma casa para a direita com loop while aninhado \n");
   printf(" \n ");

   int i = 0;
   
   
    while (i<1) { //O primeiro loop while fará o loop se repetir uma vez, pois a condição i é de 0 até 1
       int j = 0;

       while (j<2){ //O segundo loop while irá imprimir a mensagem 2 vezes, pois a condição j é de 0 até 2

      printf("Cima \n");
         j++; // Incremento para que o valor inicial de j receba +1
      }
      printf("Direta \n"); //Depois que o loop for concluído e rodar uma vez, a mensagem fora do loop irá aparecer por padrão
      i++; // Incremento para que o valor inicial de i receba +1
   }

    return 0;
}
