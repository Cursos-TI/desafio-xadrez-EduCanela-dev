
#include <stdio.h>


//TORRE
void Rec_torre(int torreAnda){  
    if (torreAnda <= 5)
    {
        printf("    %d casa(s) para a direita\n", torreAnda);
        Rec_torre(torreAnda + 1);
        if (torreAnda == 5){
                printf("torre andou um total de %d casa(s) para a direita.\n", torreAnda);
        }
    }
}

//BISPO
void Rec_bispo(int coluna){
    if (coluna <= 5){
        printf("    %d vez(es) para cima;\n", coluna);
            for (int linha = coluna; linha <= coluna; linha++)
            {
                printf("    %d vez(es) para direita.\n\n", linha);
            }
        if (coluna == 5){
                printf("bispo andou um total de %d casa(s) para a digonal superior esquerda.\n", coluna);
        }
            
        Rec_bispo(coluna + 1);
    }
}

//RAINHA
void Rec_rainha(int Mov_rainha){
    if (Mov_rainha <= 8)
    {
        printf("    %d vez(es) para a esquerda.\n", Mov_rainha);
        Rec_rainha(Mov_rainha + 1);
        if (Mov_rainha == 8)
        {
            printf("Rainha andou um total de %d casa(s) para a esquerda.\n", Mov_rainha);
        }
    }
}

// CAVALO
void Rec_cavalo(int Mov_cavalo){
    int cima = 2;
    int direita = 1;
    if (Mov_cavalo <= 1)
    {
        for (cima, direita;cima > direita; cima + 2, direita++)
        {
            printf("    %d casa(s) para a cima.\n", cima);
            printf("    %d casa(s) para a direita.\n", direita);
        }
        Rec_cavalo(Mov_cavalo + 1);
    }
}

int main(){

    int cavalo = 1; 
    int torre = 1;
    int bispo = 1;
    int rainha = 1;

    printf("cavalo andou respectivamente: \n"); //movimento cavalo
    Rec_cavalo(cavalo);

    
        printf("______________________________\n\n");


    printf("Torre andou respectivamente: \n"); //movimento torre
    Rec_torre(torre);
    

        printf("______________________________\n\n");


    printf("Bispo andou respectivamente:\n"); //Movimento bispo
    Rec_bispo(bispo);
    

            printf("______________________________\n\n");

    printf("Rainha andou respectivamente:\n\n"); //Movimento rainha
    Rec_rainha(rainha);

return 0;}