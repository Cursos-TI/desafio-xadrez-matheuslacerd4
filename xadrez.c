#include <stdio.h>

// Constantes para os movimentos
const int MOVIMENTOS_TORRE = 5;
const int MOVIMENTOS_BISPO = 5;
const int MOVIMENTOS_RAINHA = 8;

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Função recursiva para o movimento do Bispo com loops aninhados
void moverBispo(int casas) {
    if (casas > 0) {
        // Loop externo para movimento vertical
        for (int i = 0; i < 1; i++) {
            printf("Cima");
            // Loop interno para movimento horizontal
            for (int j = 0; j < 1; j++) {
                printf(", Direita\n");
            }
        }
        moverBispo(casas - 1);
    }
}

int main() {
    // --- Movimentação da Torre ---
    printf("--- Movimento da Torre ---\n");
    moverTorre(MOVIMENTOS_TORRE);
    printf("\n"); 

    // --- Movimentação do Bispo ---
    printf("--- Movimento do Bispo ---\n");
    moverBispo(MOVIMENTOS_BISPO);
    printf("\n"); 

    // --- Movimentação da Rainha ---
    printf("--- Movimento da Rainha ---\n");
    moverRainha(MOVIMENTOS_RAINHA);
    printf("\n");

    // --- Movimentação do Cavalo ---
    printf("--- Movimento do Cavalo ---\n");

    // Loop complexo para o Cavalo (L: 2 Cima, 1 Direita)
    // Loop externo controla a execução do movimento
    for (int i = 0; i < 1; i++) {
        int j = 0;
        // Loop interno com condições múltiplas e controle de fluxo
        while (j < 3) { // 3 passos no total (2 Cima + 1 Direita)
            if (j < 2) {
                printf("Cima\n");
                j++;
                continue; // Pula para a próxima iteração
            }
            
            if (j == 2) {
                printf("Direita\n");
                j++;
                break; // Encerra o loop após o movimento completo
            }
        }
    }

    return 0;
}
