#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1;
    printf("Introduza um numero:");
    scanf("%d",&v1);
    if(v1>0){
        printf("\n O numero \"%d\" e maior que 0",v1);
    }
    return 0;
}
