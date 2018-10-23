#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char cho,cho2;
    float v1,taxa23=1.23,taxa9=1.09,desc;
    printf("Introduza o preço:");
    scanf("%f",&v1);
    printf("Introduza um caracter:\n\t%-25s%-5s%s\n\t%-25s%-5s%s\n","Taxa normal",":","N","Taxa intermedia",":","I");
    scanf(" %c",&cho);
    cho2=tolower(cho);
    switch(cho2){
    case 'n':
        desc=v1*taxa23;
        printf("\n%-35s%-5s%.2f\n%-35s%-5s%.0f%%\n%-35s%-5s%.2f\n\n","Preço inicial do produto",":",v1,"Desconto",":",-((1-taxa23)*100),"Preço com desconto no produto",":",desc);
    break;
    case 'i':
        desc=v1*taxa9;
        printf("\n%-35s%-5s%.2f\n%-35s%-5s%.0f%%\n%-35s%-5s%.2f\n\n","Preço inicial do produto",":",v1,"Desconto",":",-((1-taxa9)*100),"Preço com desconto no produto",":",desc);
    break;
    default:
        printf("Caractér Introduzido \"%c\": Caractér Invalido! O\n",cho);
    break;
    }
    return 0;
}
