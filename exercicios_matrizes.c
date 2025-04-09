/******************************************************************************
1
Escreva um programa que passe uma matriz 5x5 para uma função que deverá retornar 
por referência a soma dos elementos da diagonal principal ou secundária da matriz 
e também a soma dos elementos que não pertencem a estas diagonais.

2
Usando a mesma matriz do exercício anterior, faça uma função que calcule e retorne 
a soma dos elementos que estão abaixo da diagonal principal.
*******************************************************************************/
#include <stdio.h>

int calcular2(int mat[][5], int abaixo) {
    int soma = 0;
    // abaixo = 1 - soma a parte abaixo da diagonal principal.
    // abaixo = 0 - soma a parte acima da diagonal principal
    if (abaixo) {
        for (int i=0; i<5; i++)
            for (int j=0; j<i; j++)
                soma += mat[i][j];
    } else {
        for (int i=0; i<5; i++)
            for (int j=4; j>i; j--)
                soma += mat[i][j];
    }
    return soma;
}

int calcular(int mat[][5], int *s1, int *s2) {
    int soma1 = 0;
    *s2 = 0;
    for (int i=0; i<5; i++)
        for (int j=0; j<5; j++) {
            if (i == j || (i+j) == 4)
                soma1 += mat[i][j];
            else
                *s2 += mat[i][j];
        }
    *s1 = soma1;
    return 1;
}

int main() {
    int mat[5][5] = {
        {1, 3, 3, 3, 1},
        {2, 1, 3, 1, 3},
        {2, 2, 1, 3, 3},
        {2, 1, 2, 1, 3},
        {1, 2, 2, 2, 1},
    };
    int soma1, soma2;
    calcular(mat, &soma1, &soma2);
    printf("%d, %d\n", soma1, soma2);
    printf("%d\n", calcular2(mat, 0));
    return 0;
}
