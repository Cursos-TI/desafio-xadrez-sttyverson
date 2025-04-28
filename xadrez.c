#include <stdio.h>

int main() {
    // Definindo as quantidades de movimentos
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;
    
    int i; // variável para uso nos loops

    printf("Movimento da Torre:\n");
    // Movimento da Torre: 5 casas para a direita (usando for)
    for (i = 1; i <= casasTorre; i++) {
        printf("Movendo para a Direita - Casa %d\n", i);
    }

    printf("\nMovimento do Bispo:\n");
    i = 1; // resetando variável
    // Movimento do Bispo: 5 casas para cima e para a direita (usando while)
    while (i <= casasBispo) {
        printf("Movendo para Cima, Direita - Casa %d\n", i);
        i++;
    }

    printf("\nMovimento da Rainha:\n");
    i = 1; // resetando variável
    // Movimento da Rainha: 8 casas para a esquerda (usando do-while)
    do {
        printf("Movendo para a Esquerda - Casa %d\n", i);
        i++;
    } while (i <= casasRainha);

    return 0;
}
