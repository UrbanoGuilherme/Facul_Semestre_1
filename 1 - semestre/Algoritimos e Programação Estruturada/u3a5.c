#include <stdio.h>

struct aluno{
    char nome[50];
    int matricula;
    float media;

};

struct Turma{
    char nome[50];
    int qtd_alunos;
    struct aluno alunos[10];
};

int main() {
    struct Turma turmas[5];
    int qtd_turmas, i, j, consulta_turmas;

    printf("Quntas turmas deseja inserir? ");
    scanf("%d", &qtd_turmas);

    if (qtd_turmas > 5) {
        printf("Excedeu o numero maximo de turmas (5). \n");
        return 1;
    }

    for(i=0; i<qtd_turmas; i++) {
        printf("Digite o nome da turma %d: ", i+1);
        scanf(" %[^\n]", turmas[i].nome);
        printf("Quantos alunos na turma %d? ", i+1);
        scanf("%d", &turmas[i].qtd_alunos);

        for(j=0; j<turmas[i].qtd_alunos; j++){
            printf("Digite o nome do aluno %d: ", j+1);
            scanf(" %[^\n]", turmas[i].alunos[j].nome);
            printf("Digite o numero de matricula do aluno %d: ", j+1);
            scanf("%d", &turmas[i].alunos[j].matricula);
            printf("Digite a media do aluno %d: ", j+1);
            scanf("%f", &turmas[i].alunos[j].media);

        }
    }


printf("\n---DADOS DAS TURMAS---\n");

printf("Qual turma deseja consultar? (1 a %d): ", qtd_turmas);
scanf("%d", &consulta_turmas);

for(i=0; i<qtd_turmas; i++) {
    if(consulta_turmas == i+1){
        printf("Turma: %s", turmas[i].nome);
        printf("\nQuantidade de alunos: %d\n", turmas[i].qtd_alunos);
        for(j=0; j<turmas[i].qtd_alunos; j++){
            printf("\nAluno %d:", j+1);
            printf("\nNome: %s", turmas[i].alunos[j].nome);
            printf("\nMatricula: %d", turmas[i].alunos[j].matricula);
            printf("\nMedia: %.2f\n", turmas[i].alunos[j].media);
        }
    }

}

return 0;
}