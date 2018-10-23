#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1,v2;
    printf("Introduza um numero:");
    scanf("%d",&v1);

    printf("Introduza um outro numero:");
    scanf("%d",&v2);
    if(v1>v2){
        printf("\n O numero \"%d\" e maior que \"%d\"",v1,v2);
    }else if(v1<v2){
        printf("\n O numero \"%d\" e maior que \"%d\"",v2,v1);
    }else{
        printf("Ambos os numeros introduzidos tem o valor de \"%d\"",v2);
    }
    return 0;
}
