#include <stdio.h>

int main() {
    float nota, soma = 0.0, media;
    int provas = 0, resposta;

do {
    printf("Digite o valor da nota: ");
    scanf("%f", &nota);
   
    soma = soma + nota;
    provas = provas + 1;

    printf("Deseja inserir mais uma nota? (1 - Sim / 2- Nao)");
    scanf("%d", &resposta);

} while (resposta == 1); 


media = (soma/provas);

if (provas > 0) { 
    printf("A média das notas é: %.2f ", media);
} else {
    printf("Insira as notas!");
}

if (media >= 7.0){
    printf("\n ALuno aprovado!\n");
} else {
    printf("\nAluno reprovado!\n");
}

return 0;
}
