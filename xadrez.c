#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    const int MOVIMENTOS_TORRE = 5;
    const int MOVIMENTOS_BISPO = 5;
    const int MOVIMENTOS_RAINHA = 8;

    // --- Movimentação da Torre ---
    printf("--- Movimento da Torre ---\n");
    for (int i = 0; i < MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n"); 

    // --- Movimentação do Bispo ---

    printf("--- Movimento do Bispo ---\n");
    int contadorBispo = 0;
    while (contadorBispo < MOVIMENTOS_BISPO) {
        // Para representar a diagonal, imprimimos a combinação de duas direções
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n"); 

    // --- Movimentação da Rainha ---

    printf("--- Movimento da Rainha ---\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < MOVIMENTOS_RAINHA);

    // --- Movimentação do Cavalo ---
    printf("\n"); 
    printf("--- Movimento do Cavalo ---\n");

    // Loop externo (for) para controlar o movimento complexo do Cavalo
    // Simulamos apenas 1 movimento completo do Cavalo
    for (int i = 0; i < 1; i++) {
        int j = 0;
        // Loop interno (while) para a parte vertical do movimento (2 casas para baixo)
        while (j < 2) {
            printf("Baixo\n");
            j++;
        }
        // Parte horizontal do movimento (1 casa para a esquerda)
        printf("Esquerda\n");
    }
   
  
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops
}
