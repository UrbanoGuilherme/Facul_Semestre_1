#include <stdio.h>
#include <math.h>

int main (){
    float x, y;

    printf("Digite o valor do sálario bruto: ");
    scanf("%f", &x);

    if (x <= 1320.00) {
        printf("Incide sobre o salário a alíquota de 7.5%% para o INSS. Logo, você pagará R$ %.2f\n", x * 0.075);
    } else if (x >= 1320.01 && x <= 2571.29) {
        printf("Incide sobre o salário a alíquota de 9%% para o INSS. Logo, você pagará R$ %.2f\n", x * 0.09);
    } else if (x >= 2571.30 && x <= 3856.94) {
        printf("Incide sobre o salário a alíquota de 12%% para o INSS. Logo, você pagará R$ %.2f\n", x * 0.12);
    } else {
        printf("Incide sobre o salário a alíquota de 14%% para o INSS. Logo, você pagará R$ %.2f\n", x * 0.14);
    }
return 0;


}
