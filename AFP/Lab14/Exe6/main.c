#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Exe6.h"
typedef struct{
    int idcartao;
    char nome[30];
    tipoData dataemissao;
}tipoCartao[2];

int main()
{
    tipoCartao utilizador;
    setlocale(LC_ALL,"Portuguese");

    int i=0;

    for(i=0;i<=1;i++){
        printf("Introduza o seu nome:\n");
        fflush(stdin);
        gets(utilizador[i].nome);
        printf("Introduza a data de Emissao:\n\n");
        lerData(&utilizador[i].dataemissao);
        utilizador[i].idcartao=i;
    }
    for(i=0;i<=1;i++){
        printf("\n\n\n\n %s\n %d/%s/%d\n %d",utilizador[i].nome,utilizador[i].dataemissao.dia,utilizador[i].dataemissao.mes,utilizador[i].dataemissao.ano,utilizador[i].idcartao);
    }
    return 0;
}
