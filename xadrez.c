
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

    while (cavalo <= 1) {
        printf("Cavalo moveu-se:\n");
        for (int anda = 0; anda <= cavalo; anda++)
        {//como cavalo sempre será 2 valores acima de "anda", o "for" será executado 2 vezes
            printf("    Baixo\n");
        }
        printf("    Esquerda\n");
        printf("\n");
        ++cavalo;
        ++cavalo;
        //Como o cavalo anda para baixo duas vezes, somei o valor da peça cavalo duas vezes 
    }
    
            printf("______________________________\n\n");
    
    int numT = 1;
    do {
        numT <= 1 ? printf("torre andou para a direita %d vez.\n", numT) 
            : printf("torre andou para a direita %d vezes.\n", numT);//fim operador ternário
                /*como o operador ternário está na estrutura externa, ele vai ser repetido a cada novo loop
                atualizando o valor de "num" a cada soma(++)*/
        while (numT <= torre)
        {
            ++numT;//enquanto o o valor de numT não se igualar ao da torre, sera somado um número
        }
        torre++;//soma um número a variável para evitar um loop infinito
    } while (torre <= 5);//finaliza quando "torre" fica equivalente a 5
    
            printf("______________________________\n\n");

    
    for (int num = 1; num <= bispo; ++num) {
        /*
        "num é igual a "1";
        e será executaddo até se igualar ao valor de bispo;
        e a cada novo loop, soma +1 na variavel 
        */
        for (bispo; bispo <= 5; bispo++)
        { }//soma um valor a bispo a cada vez que o loop interno é executado

        num <= 1 ? printf("bispo andou para diagonal direita %d vez.\n", num)
            : printf("bispo andou para diagonal direita %d vezes.\n", num);//fim operador ternário
        
    }
    
            printf("______________________________\n\n");

    while (rainha <= 8) {//executado enquanto rainha for menor ou igual a 8
        for ( int num = 1; num <= 8; num++)
        /*
        a variável num é executado a cada novo loop interno e somado +1 a cada execução
        */
        {
            num <= 1 ? printf("Rainha andou para a esquerda %d vez.\n", num) 
                : printf("Rainha andou para a esquerda %d vezes.\n", num);//fim operador ternário
            ++rainha;//soma +1 para evitar loop infinito, pois assim a variável "rainha" alcança a condição (rainha <= 8)
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


