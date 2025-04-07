#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int Torre;
    int Bispo = 1;
    int Rainha = 1;
    int CavaloBaixo = 1;
    int CavaloEsquerda = 1;

    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // Implementação de Movimentação da torre: 5 casas para a direita
    printf("Movimento da torre:\n");
    for (Torre = 1; Torre <= 5; Torre++ ){
            printf("Direirta\n");
    }
        
    //Implimentando movimentação do bispo: 5 casas na diagonal para cima e à direita
    printf("\nMovimento do bispo\n");
    while (Bispo <= 5){
        printf("Cima, Direita\n");
        Bispo++;
    }
    
    // Implentamdo movimenação da Rainha: 8 casas para a esquerda
    printf("\nMovmento da Rainha\n");
    do{
        printf("esquerda\n");
        Rainha++;
    } while (Rainha <= 8);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nMovimento do Cavalo\n");
    for (CavaloBaixo = 1; CavaloBaixo <= 2; CavaloBaixo++) {// duas casas para baixo
        printf("Baixo\n");
    } 
    CavaloEsquerda = 1;// inicializando a varaiável
    while (CavaloEsquerda <= 1){// uma casa para esquerda
           printf("Esquerda\n");
           CavaloEsquerda++;
    }
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
