#include <stdio.h>
#include <stdlib.h>

int main()
{
    char v1,v2,buffer;
    printf("Introduza 2 Caracteres\n");
    scanf("%c %c",&v1, &v2);
    printf("Valor introduzido : \n\n\t v1:%c | | v2:%c\n\n\n",v1,v2);
    buffer = v1;
    v1=v2;
    v2=buffer;
    printf("Valor trocado : \n\n\t v1:%c | | v2:%c\n\n",v1,v2);
    return 0;
}
