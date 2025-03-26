/******************************************************************************
Lista 1.03
*******************************************************************************/
#include <stdio.h>


int q2() {
    /* Faça um algoritmo que leia um número positivo e imprima
    seus divisores. 
    Exemplo: Os divisores do número 66 são: 
    1, 2, 3, 6, 11, 22, 33 e 66. */
    int numero;
    puts("Digite um numero");
    scanf("%d", &numero);
    for (int i=1; i<(numero/i); i++) {
        if (numero % i == 0) {
            printf("(%d) (%d) ", i, numero/i);
        }
    }
    printf("\n");
    return 1;
}


int q3() {
    float soma = 0;
    int n;
    puts("Digite um numero");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        soma += (2.0 * i - 1) / i;
    }
    printf("Soma = %f\n", soma);
    return 1;
}

int q4() {
    return 1;
}

int main() {
    int questao;
    char nome[10];
    do {
        puts("Digite o número da questão [2, 3, 4] ou 0 para finalizar");
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
                // q4();
                break;
            default:
                puts("Questão inválida");
        }
    } while (questao != 0);
    return 0;
}

