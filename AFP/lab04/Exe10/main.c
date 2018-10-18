#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano,mes,dia;
    printf("Introduza o Ano:");
    scanf("%d",&ano);
    printf("\n");
    printf("Introduza o Mes:");
    scanf("%d",&mes);
    printf("\n");
    printf("Introduza o Dia:");
    scanf("%d",&dia);
    printf("\n\n");
    printf ("Data : %04d/%02d/%02d\n",ano,mes,dia);
    return 0;
}
