#ifndef EXE7_H_INCLUDED
#define EXE7_H_INCLUDED

typedef struct{
    int idcartao;
    char nome[30];
    tipoData dataemissao;
}tipoCartao;

void lerCartao(tipoCartao *cartao,int i);

#endif // EXE7_H_INCLUDED
