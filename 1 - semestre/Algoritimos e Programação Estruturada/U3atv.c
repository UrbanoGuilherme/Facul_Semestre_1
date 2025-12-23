#include <stdio.h>

int main(){

int vetor[5], i;
int soma = 0;


printf("Digite 5 numeros para serem armazenados: \n");

for(i=0; i<5; i++){
    scanf("%d", &vetor[i]);
}

for(i=0; i<5; i++){
    soma+=vetor[i];
}

printf("Valores digitados:\n");
for(i=0;i<5;i++){
    printf("%d, ", vetor[i]);
    }

printf("\nA soma dos valores = %d", soma);

return 0;
}