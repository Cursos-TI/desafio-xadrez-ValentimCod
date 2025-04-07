#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
// Implementação da recursividade do desafio Mestre


//função recusursiva para movimentação da Torre
    void movimentoTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");

        movimentoTorre(casas - 1);
    }
}

// Função para movimentação do Bispo
    void movimentoBispo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        movimentoBispo(casas - 1);
    }
}
// Função para movimentação da Rainha
    void movimentoRainha(int casas) {
        if (casas >0 ){
            printf("Esquerda\n");
            movimentoRainha(casas - 1);
        }
    }

    int main() {
//Movimento da Torre com recursividade
        int Torre = 5;
    printf("Movimento da Torre\n");
    movimentoTorre(Torre);

//Movimento do bispo com recursividade
        int Bispo = 5;
    printf("\nMovimento do Bispo\n");
    movimentoBispo(Bispo);

//Movimentação do bispo com loops aninhados
    printf("\nMovimento do Bispo (Loops Aninhados)\n");
    for (int CimaBispo = 1; CimaBispo <= 5; CimaBispo++) { //Movimento vertical
        for (int DireitaBispo = 1; DireitaBispo <= 1; DireitaBispo++) { //Movimento horizontal
            printf("Cima, Direita\n");
        }
    }
    

//Movimeento da rainha com recursividade
        int Rainha = 8;
    printf("\nMovimento da Rainha\n");
    movimentoRainha(Rainha);

//Movimento do cavalo com loops aninhados
    printf("\nMovimento do Cavalo\n");
    for (int CavaloBaixo = 1; CavaloBaixo <= 2; CavaloBaixo++) { // duas casas para baixo
        printf("Cima\n");
        for (int CavaloDireita = 1; CavaloDireita <= 1; CavaloDireita++) { // uma casa para direita
        if (CavaloBaixo == 2 ) {
                printf("Direita\n");
                break; // sair do loop interno após o movimento em "L"
            }          
        }
    }

    printf("\n");

/*  
int CavaloBaixo = 1;
int CavaloEsquerda = 1;
*/
    /*
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
    */

    return 0;
}
