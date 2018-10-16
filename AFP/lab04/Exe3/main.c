#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra = 'a';
    int ano = 2017;
    float fator = 1.3450000;
    printf("A variavel letra tem o valor de %c\n",letra);
    letra = 'b';
    printf("A variavel letra tem agora o valor de %c\n",letra);
    printf("A variavel ano tem o valor de %d\n",ano);
    printf("A variavel fator tem o valor de %.6f\n",fator);
    fator=1.200000;
    printf("A variavel fator tem o valor de %.6f\n",fator);
    return 0;
}
