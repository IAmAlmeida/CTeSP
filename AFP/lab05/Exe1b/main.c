#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1;
    printf("Introduza um numero:");
    scanf("%d",&v1);
    if(v1>0){
        printf("\n O numero \"%d\" e maior que 0",v1);
    }else if(v1<0){
        printf("\n O numero \"%d\" e menor que 0",v1);
    }else{
        printf("\n O numero \"%d\" e zero",v1);
    }
    return 0;
}
