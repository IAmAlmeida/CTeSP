#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"");

    int a,b,c;

    printf("Introduza três números inteiros:\n");
    scanf("%d",&a);scanf("%d",&b);scanf("%d",&c);
    ordenaTresInteiros(&a,&b,&c);
    printf("\n\n%d>%d>%d\n\n",a,b,c);
    return 0;
}

void trocaInteiros(int *x, int *y){
    int buffer;
    buffer=*y;
    *y=*x;
    *x=buffer;
}

void ordenaTresInteiros(int *x, int *y, int *z){
    int maior=*x,meio=*y,menor=*z,buffer;
    if(menor>meio){
        trocaInteiros(&buffer,&menor);
        trocaInteiros(&menor,&meio);
        trocaInteiros(&meio,&buffer);
    }
    if(menor>maior){
        trocaInteiros(&buffer,&menor);
        trocaInteiros(&menor,&maior);
        trocaInteiros(&maior,&buffer);
    }
    if(meio>maior){
        trocaInteiros(&buffer,&meio);
        trocaInteiros(&meio,&maior);
        trocaInteiros(&maior,&buffer);
    }
    *x=maior;
    *y=meio;
    *z=menor;
}

