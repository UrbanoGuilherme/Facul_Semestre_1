#include <stdio.h>

int main(){

float n1, n2, n3, soma, subtracao, multiplicacao;
float maior, meio, menor;



printf("Insira 3 numeros:\n");
scanf("%f %f %f", &n1, &n2, &n3);

printf("A soma de %.2f + %.2f + %.2f = ", n1, n2, n3);
soma = n1 + n2 + n3;
printf("%.2f\n", soma);

printf("A subtracao de %.2f - %.2f - %.2f = ", n1, n2, n3);
subtracao = n1-n2-n3;
printf("%.2f\n", subtracao);

printf("A multiplicacao de %.2f x %.2f x %.2f = ", n1, n2, n3);
multiplicacao = n1*n2*n3;
printf("%.2f\n", multiplicacao);


    if (n1 <= n2 && n1 <= n3) {
        menor = n1;
        if (n2 <= n3) {
            meio = n2;
            maior = n3;
        } else {
            meio = n3;
            maior = n2;
        }
    }
    else if (n2 <= n1 && n2 <= n3) {
        menor = n2;
        if (n1 <= n3) {
            meio = n1;
            maior = n3;
        } else {
            meio = n3;
            maior = n1;
        }
    }
    else {
        menor = n3;
        if (n1 <= n2) {
            meio = n1;
            maior = n2;
        } else {
            meio = n2;
            maior = n1;
        }
    }

    printf("o maior numero = %.2f, o numeor do meio = %.2f, o menor numero = %.2f\n", maior, meio, menor);
    printf("Ordem crescente: %.2f, %.2f, %.2f\n", menor, meio, maior);


return 0;
}
