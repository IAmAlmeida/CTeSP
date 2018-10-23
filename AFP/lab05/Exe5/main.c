#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
      setlocale(LC_ALL, "Portuguese");
    float radius,pi=3.1415927,area,vol,perim;
    char cho;
    printf("Introduza o valor do raio:");
    scanf("%f",&radius);
    printf("\nO que pretende fazer ?\n\n\t%-20s:\tP\n\t%-20s:\tA\n\t%-20s:\tV\n\n","Perimetro","Area","Volume");
    scanf(" %c",&cho);
    cho=tolower(cho);
    switch(cho){
    case 'p':
        perim = 2*(pi*radius);
        printf("\t+++ CÁLCULO DO\"Perímetro\"-\CIRCUNFERÊNCIA\+++\n\t%-20s%.2f\n\t%-20s%.2f\n\t%-20s%.2f\n\t+++++++++++++++++++++++++++++++++++++++++++++++++\n","Valor do Pi:",pi,"Valor do raio:",radius,"Valor do Perimetro:",perim);
    break;
    case 'v':
        vol=(4*pi*(radius*radius*radius))/3;
        printf("\t+++ CÁLCULO DO\"Volume\"-\CIRCUNFERÊNCIA\+++\n\t%-20s%.2f\n\t%-20s%.2f\n\t%-20s%.2f\n\t+++++++++++++++++++++++++++++++++++++++++++++++++\n","Valor do Pi:",pi,"Valor do raio:",radius,"Valor do Volume:",vol);
    break;
    case 'a':
        area = (radius*radius)*pi;
        printf("\t+++ CÁLCULO DO\"Área\"-\CIRCUNFERÊNCIA\+++\n\t%-20s%.2f\n\t%-20s%.2f\n\t%-20s%.2f\n\t+++++++++++++++++++++++++++++++++++++++++++++++++\n","Valor do Pi:",pi,"Valor do raio:",radius,"Valor da Area:",area);
    break;
    default: printf("A letra introduzida nao coresponde a nenhuma das acima indicadas");
    break;
    }
    return 0;
}
