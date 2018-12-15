#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define max_alunos 5

typedef struct{
    char nome[20];
    char morada[50];
    int idade;
}tipoAlunos[max_alunos];

int main()
{
    tipoAlunos alunos;
	setlocale(LC_ALL, "Portuguese");
    int i=0,op=0;
    for(i=0;i<max_alunos;i++){
        printf("Introduza o nome e idade e morada, pela respetiva ordem [%d]\n",i+1);
        gets(alunos[i].nome);
        fflush(stdin);
        scanf(" %d",&alunos[i].idade);
        fflush(stdin);
        gets(alunos[i].morada);
    }
    for(i=0;i<max_alunos;i++){
        printf("\n Nome:%s\n Idade:%d\n Morada:%s\n\n",alunos[i].nome,alunos[i].idade,alunos[i].morada);
    }
    system("cls");
    do{
        printf("Que aluno pretende consultar? [1-%d]\n Pressione 0 para sair\n",max_alunos);
        scanf("%d",&op);
        op--;
        if(op>=0 && op<=max_alunos-1){
                system("cls");
            printf("\n Nome:%s\n Idade:%d\n Morada:%s\n\n",alunos[op].nome,alunos[op].idade,alunos[op].morada);
        }else{
            system("cls");
            printf("\n O aluno pretendido não existe\n\n");
        }
        op++;
    }while(op!=0);
    return 0;
}
