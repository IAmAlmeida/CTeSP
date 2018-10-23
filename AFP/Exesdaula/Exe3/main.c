#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char cat;
    printf("Introduza quer P/M/L");
    scanf("%c",&cat);
    cat=toupper(cat);
    switch(cat){
    case 'P': printf("Pesado"); break;
    case 'M': printf("Motociclo"); break;
    case 'L': printf("Ligeiro"); break;
    default: printf("Letra Invalida!"); break;
    }
    return 0;
}
