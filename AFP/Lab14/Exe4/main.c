#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define max_alunos 5

typedef struct{
    char nome[20];
    char morada[50];
    int idade;
}tipoAlunos;

void lerAluno(tipoAlunos *alunos,int i){
        printf("Introduza o nome e idade e morada, pela respetiva ordem [%d]\n",i+1);
        gets(alunos->nome);
        fflush(stdin);
        scanf(" %d",&alunos->idade);
        fflush(stdin);
        gets(alunos->morada);

}

void mostrarAluno(tipoAlunos alunos){

        printf("\n Nome:%s\n Idade:%d\n Morada:%s\n\n",alunos.nome,alunos.idade,alunos.morada);

}

int main()
{
    int i=0;
    tipoAlunos alunos[max_alunos];
	setlocale(LC_ALL, "Portuguese");
	for(i=0;i<max_alunos;i++){
        lerAluno(&alunos[i],i);
	}
    system("cls");
    int op=0;
    do{
    printf("Que aluno pretende consultar? [1-%d]\n Pressione 0 para sair\n",max_alunos);
    scanf("%d",&op);
    op--;
    if(op>=0 && op<=max_alunos-1){
            system("cls");
            mostrarAluno(alunos[op]);
    }else{
        system("cls");
        printf("\n O aluno pretendido não existe\n\n");
    }
    op++;

    }while(op!=0);
    return 0;
}
