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
    // ao usar o apontador na função em vez de nas variaveis da função somos obrigados a ter de apontar para a função
    // de for a a conseguir obter o resultado caso contrario só se irá obter o endereço de "temp",
    // outra solução seria retirar o retorno do endereço de "temp" e retornar apenas o mesmo.

    return 0;
}
