/******************************************************************************
Lista 1.02
*******************************************************************************/
#include <stdio.h>


int q2() {
    /*  Faça um programa que leia dois números e mostre o maior deles. 
        Se, por acaso, os dois números forem iguais, imprima a mensagem “Números iguais”.
    */
    int num1, num2;
    puts("Digite dois números inteiros");
    scanf("%d", &num1);
    scanf("%d", &num2);
    if (num1 == num2)
        puts("Números iguais");
    else
        printf("O maior número é %d\n", num1 > num2 ? num1 : num2);
    return 1;
}

int is_even(int numero) {
    return (numero % 2 == 0);
}

int q3() {
    /*  
        Faça um programa que leia um número inteiro e verifique se esse 
        número é par ou ímpar.
    */
    int num;
    puts("Digite número inteiro");
    scanf("%d", &num);
    printf("%d é %spar\n", num, is_even(num) ? "" : "ím");
    return 1;
}

int q4() {
    /*
    Faça um programa que receba a altura e o sexo de uma pessoa e calcule e 
    mostre seu peso ideal, utilizando as seguintes fórmulas (em que “h” 
    corresponde à altura):
        - Homens: (72,7 * h) – 58
        - Mulheres: (62,1 * h) – 44,7
    */
    float altura, peso;
    char sexo;
    puts("Digite o sexo [M/F]");
    sexo = getchar();
    if (sexo != 'M' && sexo != 'm' && sexo == 'F' && sexo == 'f') {
        puts("Opção inválida");
        return 0;
    }
    puts("Digite a altura (em metros)");
    scanf("%f", &altura);
    if (sexo == 'M' || sexo == 'm')
        peso = 72.7 * altura - 58;
    else
        peso = 66.1 * altura - 44.7;
    printf("O peso ideal é %6.2fKg\n", (sexo == 'M' || sexo == 'm') ?  
            72.7 * altura - 58 : 
            66.1 * altura - 44.7);
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
                q4();
                break;
            default:
                puts("Questão inválida");
        }
    } while (questao != 0);
    return 0;
}

