#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1,v2,mult,soma,sub;
    float div;
    printf("Introduza 2 numeros!\n");
    scanf("%d %d",&v1, &v2);
    div= (float)v1/(float)v2;
    mult=v1*v2;
    soma=v1+v2;
    sub=v1-v2;
    printf("Soma:%d\nMultiplicacao:%d\nSubtracao:%d\nDivisao:%.2f\n",soma,mult,sub,div);
    return 0;
}
