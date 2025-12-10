#include <stdio.h> 

//Função para exibir o tabuleiro
// Recebe a matriz (tab) que representa o tabuleiro e o tamanho (tam) dele.
void tabuleiro(int tab[][10], int tam){
    int x, y; // Variáveis de controle para as linhas (x) e colunas (y).

    // Loop externo: Percorre as linhas do tabuleiro.
    for (x = 0; x < tam; x++){
        // Loop interno: Percorre as colunas do tabuleiro, dentro da linha atual.
        for (y = 0; y < tam; y++){
            // Imprime o valor da célula atual do tabuleiro (ex: 0 para água, 1 para navio).
            // O espaço (" ") é para separar os números.
            printf("%d ", tab[x][y]);
        }
        // Após imprimir todos os elementos de uma linha, quebra a linha no terminal.
        printf("\n");
    }
}

// Função principal (onde a execução do programa começa)
int main(){
    // Declara e inicializa uma matriz 10x10 chamada 'm'.
    // Todos os valores são inicializados com 0 (que geralmente significa água/vazio).
    int m[10][10] = {0};

    // Imprime um título no terminal para o jogo.
    printf("@@@@@@@ BATALHA NAVAL @@@@@@@@\n");

    // Chama a função 'tabuleiro' para mostrar o tabuleiro inicial (cheio de zeros).
    // 'm' é o tabuleiro, e '10' é o tamanho (10x10).
    tabuleiro(m, 10);

    // Movimentação do Navio (nivel Novato)

    // >>> NAVIO HORIZONTAL (3 casas)
    m[2][4] = 3;
    m[2][5] = 3;
    m[2][6] = 3;

    // >>> NAVIO VERTICAL (3 casas)
    m[5][1] = 3;
    m[6][1] = 3;
    m[7][1] = 3;
    
    return 0;
}