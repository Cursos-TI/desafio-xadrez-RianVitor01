#include <stdio.h>

/* Simulação básica de movimentos de peças de xadrez */

int main() {

    /* ================= TORRE =================
       Movimento: 5 casas para a direita
       Estrutura utilizada: for
    */
    const int MOV_TORRE = 5;
    int i;

    printf("Movimento da Torre:\n");
    for (i = 1; i <= MOV_TORRE; i++) {
        printf("Direita\n");
    }

    printf("\n");

    /* ================= BISPO =================
       Movimento: 5 casas na diagonal (cima + direita)
       Estrutura utilizada: while
    */
    const int MOV_BISPO = 5;
    int contadorBispo = 1;

    printf("Movimento do Bispo:\n");
    while (contadorBispo <= MOV_BISPO) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    /* ================= RAINHA =================
       Movimento: 8 casas para a esquerda
       Estrutura utilizada: do-while
    */
    const int MOV_RAINHA = 8;
    int contadorRainha = 1;

    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= MOV_RAINHA);

    return 0;
}
