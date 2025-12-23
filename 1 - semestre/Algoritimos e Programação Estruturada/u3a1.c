#include <stdio.h>

int main(){

    char cpf[15], cpf_limpo[12];
    int i, n=0;


    printf("Digite o número do seu CPF (com pontos e traços): ");
    scanf("%s", cpf);

    for(i = 0; i<14; i++){
    
       if(cpf[i] == '.' || cpf[i] == '-')
            continue;
        else{
            cpf_limpo[n] = cpf[i];
            n++;

        }
    }
    
    cpf_limpo[n] = '\0';

    printf("CPF formatado: %s\n", cpf_limpo);
    
    return 0;
    

    }
