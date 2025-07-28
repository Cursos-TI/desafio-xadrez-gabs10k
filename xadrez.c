#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int bispoMove = 0;
    int rainhaMove = 0;

    printf("Xadrez Tabuleiro: \n");

    for(int i = 0; i < 5; i++)
    {
        printf("Torre: Direita \n");
    }
    printf("============================================== \n");
    while (bispoMove < 5)
    {
        printf("Bispo: Direita \n");
        printf("Bispo: Cima \n");
        bispoMove++;
    }
    printf("============================================== \n");

    do
    {
        printf("Rainha: Esquerda \n"); 
        rainhaMove++;
    } while (rainhaMove < 8);
    printf("============================================== \n");

    //movimento do cavalo:
    for (int i = 0; i < 4; i++)
    {
       printf("Cavalo: %s \n", (i < 3 ? "Cima" : "Direita")); 
    }

    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
