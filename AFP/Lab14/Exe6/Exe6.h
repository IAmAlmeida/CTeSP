#ifndef EXE6_H_INCLUDED
#define EXE6_H_INCLUDED

typedef struct{
    int dia;
    char mes[20];
    int ano;
}tipoData;

lerData(tipoData *data);
escreverData(tipoData *data);
mesnumeroparaextenso(char *mes);
defaultdate(tipoData *data);

#endif // EXE6_H_INCLUDED
