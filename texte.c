#include <stdio.h>

#define tam 10
#define navio 3
#define agua 0
#define hab 1


int main(){

int tabuleiro [tam][tam];

// Configuração do cone (flexível)
int linha_inicio_cone = 7;    // linha onde o cone começa
int coluna_centro_cone = 2;   // coluna central do cone
int altura_cone = 3;          // quantas linhas o cone ocupa

// Configuração da cruz
int centro_linha_cruz = 8;
int centro_coluna_cruz = 7;

// Configuração do octaedro
int linha_centro_octa = 1;
int coluna_centro_octa = 1;

for (int i = 0; i < tam; i++)
{
    for (int j = 0; j < tam; j++)
    {
        tabuleiro[i][j] = agua;
    }
    
}

for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        if (i >= linha_inicio_cone && i < linha_inicio_cone + altura_cone &&
            j >= coluna_centro_cone - (i - linha_inicio_cone) &&
            j <= coluna_centro_cone + (i - linha_inicio_cone)) {
            tabuleiro[i][j] = 1;
        }

        if ((i >= centro_linha_cruz - 1 && i <= centro_linha_cruz + 1 && j == centro_coluna_cruz) ||  
            (i == centro_linha_cruz && j >= centro_coluna_cruz - 2 && j <= centro_coluna_cruz + 2)) {  
            tabuleiro[i][j] = 1;
        }

        if ((i == linha_centro_octa - 1 && j == coluna_centro_octa) ||       // topo
                (i == linha_centro_octa && j >= coluna_centro_octa - 1 && j <= coluna_centro_octa + 1) || // meio
                (i == linha_centro_octa + 1 && j == coluna_centro_octa)) {       // base
                tabuleiro[i][j] = 1;
            }
    }
}




printf ("   A B C D E F G H I J\n");
int numero = 0;
for (int i = 0; i < tam; i++)
{
    numero++;
    printf ("%2d ", numero);
    for (int j = 0; j < tam; j++)
    {
        printf ("%d ", tabuleiro[i][j]);
    }
    printf("\n");
}


return 0;
}