#include <stdio.h>


//----------FUNÇÃO SAQUE-----------
void SAQUE(float *saldo){
float valor_saque;

printf("Qual valor deseja sacar: ");
scanf("%f", &valor_saque );

if (valor_saque>*saldo){
    printf("Saldo insuficiente para saque!");
    return;
}
*saldo = *saldo - valor_saque;

return;
}


//-----------FUNÇÃO DEPOSITO------------
void DEPOSITO(float *saldo){
    float valor_deposito;

    printf("Qual valor deseja depositar: ");
    scanf("%f", &valor_deposito);

    if(valor_deposito<0){
        printf("Valor negativo! Caso queira realizar SAQUE utilize funcao [0]SAQUE");
        return;
    }

    *saldo = *saldo + valor_deposito;
    
    return;
}


//-----------FUNÇÃO TRANSFERIR-------------
void TRANSFERIR(float *saldo){
    float valor_transfer;
    char chave_pix[50];



    printf("Qual valor deseja transferir via PIX: ");
    scanf("%f", &valor_transfer);
   
    
    if(valor_transfer > *saldo){
        printf("Saldo insuficiente");
        
        return;
    }

    if(valor_transfer<*saldo && valor_transfer>0){
        printf("Para qual chave pix deseja transferir R$%.2f:", valor_transfer);
        scanf("%49s", chave_pix);

        *saldo = *saldo - valor_transfer;

        printf("R$%.2f transferido para chave %s\n", valor_transfer, chave_pix);
    }
    
    
    return;

}



int main(){

    char cpf[12], nome_completo[50];
    int opc_menu;
    float saldo = 10000;


    printf("-----SISTEMA BANCARIO-----\n");

    printf("Para comecar,  digite seu CPF(sem pontos e traco): ");
    scanf("%11s", cpf );

    printf("Digite seu nome completo: ");
    scanf(" %49[^\n]", nome_completo);

    printf("Bem vindo %s", nome_completo);

    printf("\nSeu saldo bancario e de: R$%.2f\n\n", saldo);

    printf("Escolha qual operacao deseja fazer:\n");
    printf(" [0] SACAR\n [1]DEPOSITAR\n [2]TRANSFERIR\n");
    scanf("%d", &opc_menu);
    printf("OPCAO %d ESCOLHIDA\n", opc_menu);

    if(opc_menu>2 || opc_menu<0){
        printf("Opcao invalida!");
        return 0;
    }

    //OPÇÃO SAQUE
    if(opc_menu==0){
        SAQUE(&saldo);
    }
     
    //OPÇÃO DEPOSITO
    if(opc_menu==1){
        DEPOSITO(&saldo);  
    }
    

    //OPÇÃO TRANSFERIR
    if(opc_menu==2){
        TRANSFERIR(&saldo);
    }
        
printf("Saldo final: R$%.2f\n", saldo);

printf("Obrigado por utilizar nosso sistema!");

return 0;


}