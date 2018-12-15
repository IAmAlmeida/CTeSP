#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Exe6.h"
typedef struct{
    int idcartao;
    char nome[30];
    tipoData dataemissao;
}tipoCartao;

void lerCartao(tipoCartao *cartao,int i)
{
    setlocale(LC_ALL,"Portuguese");
        printf("Introduza o seu nome:\n");
        fflush(stdin);
        gets(cartao->nome);
        printf("Introduza a data de Emissao:\n\n");
        lerData(&cartao->dataemissao);
        cartao->idcartao=i;
    return 0;
}
