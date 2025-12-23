#include <stdio.h>

int main() {
    int qtd_disciplinas, qtd_alunos, tot_alunos = 0, lim_alunos = 50;
    int i;

    printf("Sistema de administração de disciplinas\n");

    printf("Insira a quantidade de disciplinas que deseja cadastrar: ");
    scanf("%d", &qtd_disciplinas);

    for (i = 1; i <= qtd_disciplinas; i++) {
        printf("Insira a quantidade de alunos na disciplina %d: ", i);
        scanf("%d", &qtd_alunos);

        if (qtd_alunos < 0) {
            printf("Quantidade de alunos inválida!\n");
            i--; // refaz a mesma disciplina
            continue; // volta ao início do laço
        }

        tot_alunos = tot_alunos + qtd_alunos;

        if (tot_alunos >= lim_alunos) {
            printf("Limite de alunos atingido!\n");
            break;
        }
    }

    printf("\nTotal de disciplinas cadastradas: %d\n", qtd_disciplinas);
    printf("Total de alunos: %d\n", tot_alunos);

    return 0;
}