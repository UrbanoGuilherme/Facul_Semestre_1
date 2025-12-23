#include <stdio.h>

int main(){

int num;
int soma = 0;

printf("Insira numeros inteiros (insira 0 para encerrar):\n");
scanf("%d", &num);

while(num != 0){
    soma += num;
    scanf("%d", &num);
}

printf("A soma dos numeros = %d", soma);

return 0;

}