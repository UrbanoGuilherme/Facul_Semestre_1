#include <stdio.h>


float calculo_salario_bruto (float valor_hora, float horas_mes){
    float salario_bruto;
    salario_bruto = valor_hora*horas_mes;

    return salario_bruto;
}


float calculo_desconto(float salario_bruto){
    float desconto; 
    desconto = salario_bruto*0.09;

    return desconto;
}

float calculo_salario_liquido(float salario_bruto){
    float salario_liquido;
    salario_liquido = salario_bruto*0.91;

    return  salario_liquido;
}

int main(){

    float horas_mes;
    float valor_hora;
    float salario_bruto, desconto, salario_liquido;

    printf("Qual o valor da sua hora trbalahada:\n");
    scanf("%f", &valor_hora);

    printf("Quantas horas por mes voce trabalhou:\n");
    scanf("%f", &horas_mes);

    salario_bruto = calculo_salario_bruto(valor_hora, horas_mes);
    desconto = calculo_desconto(salario_bruto);
    salario_liquido = calculo_salario_liquido(salario_bruto);

printf("O valor do salario  bruto = R$%.2f\n", salario_bruto);
printf("O valor do desconto = R$%.2f\n", desconto);
printf("O valor do salario liquido = R$%.2f\n", salario_liquido);

return 0;
}