#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
float libra(float dinheiro){
    dinheiro = dinheiro * 1.15;
    return dinheiro;
}
float euro(float dinheiro){
    dinheiro = dinheiro * 0.87;
    return dinheiro;
}
int main()
{
	setlocale(LC_ALL, "Portuguese");
	float money,ogmoney;
	int val=1;
    do{
        printf("\nMenu Conversor\n\t1 - Conversão Euros/Libras\n\t2 - Conversão Libras/Euros\n\t0 - Sair\nEscolha uma Opção");
        scanf("%d",&val);
        switch(val){
            case 2:
                 printf("Introduza o valor em Libras a converter: ");
                 scanf("%f",&ogmoney);
                 money=libra(ogmoney);
                 printf("Resultado da conversão %.2f GBP = %.2f Euros.\n",ogmoney,money);
                 break;
            case 1:
                 printf("Introduza o valor em Euros a converter: ");
                 scanf("%f",&ogmoney);
                 money=euro(ogmoney);
                 printf("Resultado da conversão %.2f Euros = %.2f GBP.\n",ogmoney,money);
                 break;
            default:
                printf("O numero inserido nao está de acordo com os acima indicado");
                break;
        }
    }while(val!=0);
    return 0;
}
