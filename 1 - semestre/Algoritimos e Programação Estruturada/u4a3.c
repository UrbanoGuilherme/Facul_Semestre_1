#include <stdio.h>


void TotalCompra(int qtd_item[],float prc_uni[],int itens, float *total){
    *total=0;

    for(int i=0; i<itens; i++){
        *total += (qtd_item[i]*prc_uni[i]);
    
    }
}


int main(){

    int itens;

    float total=0;

    printf("Quantos itens deseja comprar: ");
    scanf("%d", &itens);

    int qtd_itens[itens];
    float prc_uni[itens];

    int i = 0;

    for(int i=0; i<itens; i++){
        printf("quantidade de itens %d: ", i++);
        scanf("%d", &qtd_itens[i]);
        printf("valor unitario do iten %d", i++);
        scanf("f", &prc_uni[i]);

    }

    TotalCompra(qtd_itens, prc_uni, itens, &total);
    
    printf("Valor total da compra: R$ %.2f", total);

    return 0;
}