#include <stdio.h>
#include <stdlib.h>

int main()
{
    char serie = 'A';
    int numero = 8;
    float peso = 34.567F;
    float racio = 0.85F;
    char descricao[] = "Obras de Arte";
    printf("%-30s:%c-%d\n","Numero de Serie",serie, numero);
    printf("%-30s:%s\n","Descricao de Conteudo",descricao);
    printf("%-30s:%.02f\n","Peso do Contentor",peso);
    printf("%-30s:%.0f%\n","Racio Vendas",racio*100);


return 0;
}
