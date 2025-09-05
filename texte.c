#include <stdio.h>

#define tam 10
#define navio 3
#define agua 0



int main(){

int tabuleiro [tam][tam];

for (int i = 0; i < tam; i++)
{
    for (int j = 0; j < tam; j++)
    {
        tabuleiro[i][j] = agua;
    }
    
}

for (int i = 3; i < 6; i++)
{
    tabuleiro[2][i] = navio;
}

for (int i = 4; i < 7; i++)
{
    tabuleiro[i][2] = navio;
}

for (int i = 3; i < 6; i++)
{
    tabuleiro[i][9-i] = navio;
}

for (int i = 6; i < 9; i++)
{
    tabuleiro[i][i] = navio;
}


printf ("     A B C D E F G H I J\n\n");
int numero = 0;
for (int i = 0; i < tam; i++)
{
    numero++;
    printf ("%2d   ", numero);
    for (int j = 0; j < tam; j++)
    {
        printf ("%d ", tabuleiro[i][j]);
    }
    printf("\n");
}


return 0;
}