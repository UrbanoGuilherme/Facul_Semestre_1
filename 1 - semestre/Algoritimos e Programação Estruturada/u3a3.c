#include <stdio.h>
#include <string.h>

struct Cadastro{
    char titulo[50];
    char autor[50];
    int data;
    int ISBN;
    int estoque;
}livros[2];

int main(){


    struct Cadastro livro0;
    strcpy(livro0.titulo,"Aventuras do ze");
    strcpy(livro0.autor, "Zezinho");
    livro0.data = 2000;
    livro0.ISBN = 12345;
    livro0.estoque = 10;

    struct Cadastro livro1;
    strcpy(livro1.titulo, "Desventuras do alfredo");
    strcpy(livro1.autor, "Alfredinho");
    livro1.data = 2001;
    livro1.ISBN = 54321;
    livro1.estoque = 11;

    livros[0]=livro0;
    livros[1]=livro1;


char busca[50]; 

    printf("Qual livro voce deseja buscar: \n");
    scanf(" %[^\n]", busca);

  for(int i = 0; i<2; i++){
    if(strcmp(busca, livros[i].titulo) == 0){
        printf("Livro encontrado!\n");
        printf("Titulo: %s\n", livros[i].titulo);
        printf("Autor: %s\n", livros[i].autor);
        printf("Data de publicacao: %d\n", livros[i].data);
        printf("ISBN: %d\n", livros[i].ISBN);
        printf("Estoque: %d\n", livros[i].estoque);

    }

  }
    return 0;
   
    }
