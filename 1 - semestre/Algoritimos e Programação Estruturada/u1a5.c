#include <stdio.h>
#include <math.h>

int main() {
    int y;
    float x, z, valor_final;

    printf("Qual o valor total da conta: ");
    scanf("%f", &x);

    printf("A conta será dividida por quantas pessoas? ");
    scanf("%d", &y);

    printf("Qual o valor de desconto por pessoa(em porcentagem): ");
    scanf("%f", &z);

    valor_final = (x/y) * (1 - (z/100));

    printf("O valor rfinal por pessoa é: R$ %.2f", valor_final);
    return 0;

}