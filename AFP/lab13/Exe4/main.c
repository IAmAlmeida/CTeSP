#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int *soma3(int a,int b){
int temp;
temp=a+b;
return temp;
}

int main()
{
    setlocale(LC_ALL,"");

    printf("%d",soma3(2,1));
    // ao usar o apontador na fun��o em vez de nas variaveis da fun��o somos obrigados a ter de apontar para a fun��o
    // de for a a conseguir obter o resultado caso contrario s� se ir� obter o endere�o de "temp",
    // outra solu��o seria retirar o retorno do endere�o de "temp" e retornar apenas o mesmo.

    return 0;
}
