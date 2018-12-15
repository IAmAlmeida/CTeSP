#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Exe6.h"
#include "Exe7.h"
#define X 2

int main()
{
    int i=0;
    tipoCartao utilizador[X];
    setlocale(LC_ALL,"Portuguese");
    for(i=0;i<=1;i++){
        lerCartao(&utilizador[i],i);
    }
    for(i=0;i<=1;i++){
        printf("\n\n\n\nNome: %s\nData de Emissão: %d/%s/%d\nID de Utilizador: %d",utilizador[i].nome,utilizador[i].dataemissao.dia,utilizador[i].dataemissao.mes,utilizador[i].dataemissao.ano,utilizador[i].idcartao);
    }

    return 0;
}
