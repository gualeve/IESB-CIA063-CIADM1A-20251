/******************************************************************************
1 - Escreva uma função que receba por parâmetro dois números inteiros
e retorne o maior deles.
2 - Escreva uma função que, dado um número real passado como
parâmetro, retorna a parte inteira e a parte fracionária desse número por
referência.

*******************************************************************************/
#include <stdio.h>

int separa(float numero, int *i, float *f) {
    *i = numero;
    *f = numero - *i;
    
    return 1;
}

int q2() {
    float f, fracao;
    int inteiro;
    
    scanf("%f", &f);
    separa(f, &inteiro, &fracao);
    printf("%d - %f\n", inteiro, fracao);
    
    return 1;
}

int maior(int x, int y) {
    return (x > y) ? x : y;
}

int q1() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("Maior valor = %d\n", maior(num1, num2));
    
    return 1;
}


int main()
{
    q1();
    q2();
    return 0;
}