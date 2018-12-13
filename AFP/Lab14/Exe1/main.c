#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
           char  nome[50];
           char  morada[50];
           int  idade;
        }tipoAluno;
int main()
{
	setlocale(LC_ALL, "Portuguese");

    tipoAluno alunos;
    printf("Introduza o nome e idade e morada, pela respetiva ordem\n");

    gets(alunos.nome);
    fflush(stdin);
    scanf(" %d",&alunos.idade);
    fflush(stdin);
    gets(alunos.morada);

    printf(" Nome:%s\n Idade:%d\n Morada:%s\n",alunos.nome,alunos.idade,alunos.morada);
    return 0;
}
