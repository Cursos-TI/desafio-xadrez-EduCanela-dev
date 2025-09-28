
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

#include <stdio.h>

int main(){

    int cavalo = 1; 
    int torre = 1;
    int bispo = 1;
    int rainha = 1;
    int anda = 0;

    while (cavalo <= 1) {// 1loop do valor 1; +1loop do valor 3; +1loop do valor 5 
        printf("Cavalo moveu-se:\n");
        for (anda; anda <= cavalo; anda++)
        {
            printf("    Baixo\n");
        }
        printf("    Esquerda\n");
        printf("\n");
        ++cavalo;
        ++cavalo;
    }
    
            printf("______________________________\n\n");
    
    int numT = 1;
    do {
        numT <= 1 ? printf("torre andou para a direita %d vez.\n", numT) 
            : printf("torre andou para a direita %d vezes.\n", numT);
        while (numT <= torre)
        {
            ++numT;
        }
        torre++;
    } while (torre <= 5);
    
            printf("______________________________\n\n");
    
    for (int num = 1; num <= bispo; ++num) {
        for (bispo; bispo <= 5; bispo++)
        { }

        num <= 1 ? printf("bispo andou para diagonal direita %d vez.\n", num)
            : printf("bispo andou para diagonal direita %d vezes.\n", num);
        
    }
    
            printf("______________________________\n\n");

    while (rainha <= 8) {
        for ( int num = 1; num <= 8; num++)
        {
            num <= 1 ? printf("Rainha andou para a esquerda %d vez.\n", num) 
                : printf("Rainha andou para a esquerda %d vezes.\n", num);
            
            ++rainha;
        }
    }



return 0;}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


