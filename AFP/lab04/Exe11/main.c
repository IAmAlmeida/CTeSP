#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char letra;
    int numero;
    printf("Introduza a Letra de Serie:");
    scanf("%c",&letra);
    printf("Introduza o Numero de Serie:");
    scanf("%d",&numero);
    ;
    printf("\t\t%c-%04d",toupper(letra),numero);

    return 0;

}
