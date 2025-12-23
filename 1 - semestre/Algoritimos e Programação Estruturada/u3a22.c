#include <stdio.h>

int main(){

    int alunos, notas, i, j;

    printf("Quantos alunos: ");
    scanf("%d", &alunos);
    printf("Quantas notas: ");
    scanf("%d", &notas);

    float matriz[alunos][notas];

    for(int i = 0; i < alunos; i++){
        for(int j = 0; j < notas; j++){
            printf("Digite a nota %d do aluno %d: ", j + 1, i + 1);
            scanf(" %f", &matriz[i][j]);
        
        }
    }
printf( "notas dos alunos: \n");

for(int i = 0; i < alunos; i++){
    printf("Aluno %d: ", i +1);
    for(int j = 0; j < notas; j++){
        printf("%.2f ", matriz[i][j]);

    }
    printf("\n");
}


float soma;
for(int i =  0; i<alunos; i++){
    soma = 0.0;
    for(int j=0; j<notas; j++){
        soma = soma + matriz[i][j];
    
    }
  
    printf("Media Geral do aluno %d: %.2f\n", i+1, soma/notas);
}
float soma2;
for(int j=0; j<notas; j++){
    soma2 = 0.0;
    for(int i=0; i<alunos; i++){
        soma2 = soma2 + matriz[i][j];
    }
    printf("Media da nota da disciplina %d: %.2f\n", j+1, soma2/alunos);
    
}
   
return 0;


}