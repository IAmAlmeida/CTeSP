#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1;
    printf("Introduza um numero:");
    scanf("%d",&v1);
    if( (v1>=0) && (v1%2==0)){
        printf("\n O numero \"%d\" e par",v1);
    }else if((v1>=0) && (v1%2!=0)){
        printf("\n O numero \"%d\" e impar",v1);
    }else{
        printf("\n O numero \"%d\" e negativo",v1);
    }
    return 0;
}
