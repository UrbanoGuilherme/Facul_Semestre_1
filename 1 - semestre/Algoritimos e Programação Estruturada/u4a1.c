#include <stdio.h>


float CalcularPeso(void);

int main(){

    float peso;

    peso = CalcularPeso();

    if(peso<=500){
        printf("Usar modelo G1");
    } else if(peso>1500){
        printf("Usar modelo G2");
    }
    else{
        printf("Usar modelo G3");
    }

    return 0;
}
    

float CalcularPeso(void){
    
    float AlturaColuna, LarguraColuna, BaseColuna, PesoColuna;

    printf("Digite o valor da altura da coluna (m): ");
    scanf("%f", &AlturaColuna);
    printf("Digite o valor da largura da coluna (m): ");
    scanf("%f",&LarguraColuna);
    printf("Digite o valor da base da coluna (m): ");
    scanf("%f", &BaseColuna);

    PesoColuna = AlturaColuna*BaseColuna*LarguraColuna*25;

    printf("O Peso da coluna é: %.2fKg\n", PesoColuna);

    return PesoColuna;

}