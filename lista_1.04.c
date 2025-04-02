/******************************************************************************
Lista 1.04
*******************************************************************************/
#include <stdio.h>


int converter(int h, int m, int s) {
    return (h * 3600 + m * 60 + s);
}

void preencher(int *h, int *m, int *s) {
    printf("Digite um horário no formato (HH:MM:SS) ");
    scanf("%d:%d:%d", h, m, s);

    return;
}

int q2() {
    /* Elabore uma função que receba três números inteiros como parâmetro, 
    representando horas, minutos e segundos. 
    A função deve retornar esse horário convertido em segundos.
    */
    int hora, min, seg;
    preencher(&hora, &min, &seg);
    printf("%d:%d:%d = %d segundos\n", hora, min, seg, converter(hora, min, seg));

    return 1;
}

int diferenca(int h1, int m1, int s1, int h2, int m2, int s2) {
    int dif = converter(h2, m2, s2) - converter(h1, m1, s1);
    if (dif < 0)
        return -1;
    return dif;
}

int q3() {
    /* Escreva uma função que receba seis números inteiros como parâmetro, 
    representando dois horários formados por horas, minutos e segundos. 
    Chamando a função da questão anterior, calcule e retorne a diferença dos 
    dois horários em segundos ou -1 se o segundo horário for menor que o primeiro.
    */
    int h1, m1, s1, h2, m2, s2;
    int dif;
    preencher(&h1, &m1, &s1);
    preencher(&h2, &m2, &s2);
    dif = diferenca(h1, m1, s1, h2, m2, s2);
    if (dif == -1) {
        printf("Horário 2 menor que horário 1\n");
    } else {
        printf("A diferença entre %02d:%02d:%02d e %02d:%02d:%02d = %d segundos\n",  h1, m1, s1, h2, m2, s2, dif);
    }
    return 1;
}

float nota() {
    float nota;
    do {
        printf("Digite uma nota (0..10) ");
        scanf("%f", &nota);
    } while (nota < 0 || nota > 10);
    return nota;
}

float media(float n1, float n2, float n3, char tipo) {
    if (tipo == 'A')
        return (n1 + n2 + n3) / 3;
    return (n1 * 5 + n2 * 3 + n3 * 2) / 10;
}

int q4() {
    /* Elabore uma função que receba três notas de um aluno como parâmetros e uma letra. 
    Se a letra for “A”, a função deverá calcular a média aritmética das notas do aluno; 
    se for “P”, deverá calcular a média ponderada, com pesos 5, 3 e 2. Retorne a média calculada.
    */
    float n1, n2, n3;
    char tipo;
    n1 = nota();
    n2 = nota();
    n3 = nota();
    do {
        puts("Digite 'A' para Aritmética ou 'P' para ponderada");
        getchar();
        tipo = getchar();
    } while (tipo != 'A' && tipo != 'P');
    printf("A média do aluno é: %5.2f\n", media(n1, n2, n3, tipo));
    return 1;
}

int main() {
    int questao;
    char nome[10];
    do {
        puts("Digite o número da questão [2, 3] ou 0 para finalizar");
        scanf("%d", &questao);
        getchar();
        switch (questao) {
            case 0:
                puts("Finalizando...");
                break;
            case 2:
                q2();
                break;
            case 3:
                q3();
                break;
            case 4:
                q4();
                break;
            default:
                puts("Questão inválida");
        }
    } while (questao != 0);
    return 0;
}

