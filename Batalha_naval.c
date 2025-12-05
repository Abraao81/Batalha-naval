#include <stdio.h>

void tabuleiro(int tab[][10], int tam){
    int x, y;
    for (x = 0; x < tam; x++){
        for (y = 0; y < tam; y++){
            printf("%d ", tab[x][y]);
        }
        printf("\n");
    }
}

int main(){
    int m[10][10] = {0};

    printf("@@@@@@@ BATALHA NAVAL @@@@@@@@\n");

     tabuleiro(m, 10);
    return 0;
}