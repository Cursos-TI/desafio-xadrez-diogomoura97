#include <stdio.h>

int main() {
    
    
    printf("DESAFIO: NÍVEL MESTRE \n");
    printf(" \n ");

    printf("Movendo a torre através de uma função recursiva \n");
    printf(" \n ");

    int CasasMovidasTorre =3; //Função declarada na linha 3 e chamada aqui
    moverTorre(CasasMovidasTorre); // O parâmetro aqui indicado "5",será o valor passado na função mover torre. Movendo a torre para a direita  5 casas

    printf("Movendo o bispo através de uma função recursiva \n");
    printf(" \n ");
       
    int CasasMovidasBispo =3; //Função declarada na linha 15 e chamada aqui
       
    moverBispo(CasasMovidasBispo); // O parâmetro aqui indicado "7",será o valor passado na função mover bispo. Movendo o bispo para a diagonal superior direita  7 casas

       
    printf("Movendo a rainha através de uma função recursiva \n");
    printf(" \n ");

    int CasasMovidasRainha =4; //Função declarada na linha 29 e chamada aqui
    moverRainha(CasasMovidasRainha); // O parâmetro aqui indicado "8",será o valor passado na função mover rainha. Movendo o bispo para cima 8 casas


   //----------------------------------------------------------------------------------------------------------------------------------------------------------------

    printf("Movendo o bispo através de loop for aninhado \n");
    printf(" \n ");

    for (int i=0;i<3;i++){}//Loop externo move o bispo 3 vezes para cima
        printf("Cima \n"); 
        for (int j = 0; j<1; j++) //Loop externo move o bispo 3 vezes para a direita
    {
        printf("Direita \n");
      }


   }
      

    return 0;
}
