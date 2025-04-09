/******************************************************************************
Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas.
Em seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na prova
1, o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja pior
nota foi na prova 3
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ALUNOS 10
#define PROVAS 3

int preencher(float notas[][PROVAS]) {
    for (int i=0; i<ALUNOS; i++)
        for (int j=0; j<PROVAS; j++)
            notas[i][j] = rand() % 101 / 10.0;
    return 1;
}

int mostrar(float notas[][PROVAS]) {
    for (int i=0; i<ALUNOS; i++) {
        for (int j=0; j<PROVAS; j++)
            printf("%4.1f ",  notas[i][j]);
        putchar('\n');
    }
    return 1;
}

int calcular(float notas[]) {
    if (notas[0] < notas[1] && notas[0] < notas[2])
        return 0;
    if (notas[1] < notas[2])
        return 1;
    return 2;
}

int main() {
    srand(time(NULL));
    float notas[ALUNOS][PROVAS];
    int piores_provas[PROVAS] = {0, 0, 0};
    
    preencher(notas);
    mostrar(notas);
    for (int i=0; i<ALUNOS; i++)
        piores_provas[calcular(notas[i])]++;
    printf("Piores Provas:\n");
    printf("P1  P2  P3\n");
    printf("%02d  %02d  %02d", piores_provas[0], piores_provas[1], piores_provas[2]);

    
    return 0;
}
