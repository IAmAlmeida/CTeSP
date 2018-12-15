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
        strcpy(cartao->nome,"Almeida");
        cartao->dataemissao.ano=(i+1)*1100;
        if(i==0){
            strcpy(cartao->dataemissao.mes,"Junho");
        }else{
            strcpy(cartao->dataemissao.mes,"Dezembro");
        }
        cartao->dataemissao.dia=(i+1)*15;
        cartao->idcartao=i;
    return 0;
}
