#include <stdio.h>
#include <math.h>

int main() {
    int w, x, y, z;
    float a;

    printf("Qual o ano esta sendo analisado? ");
    scanf("%d", &w);

    printf("Insira a qtd de TVs vedndidas: ");
    scanf("%d", &x);

    printf("Insira a qtd de Notebooks vendidos: ");
    scanf("%d", &y);

    printf("Insira a qtd de Smartphones vendidos: ");
    scanf("%d", &z);

    a = (x + y + z) / 3.0;

    printf("\nA média de produtos vendidos no ano de %d é: %.2f\n", w, a);
    
    if (a>1000){
        printf("Parabéns! Bateram a meta!");
    }
    else{
        printf ("Infelizmente, a meta não foi batida.");
    }
    return 0; 
}