#include <stdio.h>
#include <stdlib.h>

void soma_media (int *v, int *soma, float *media){

    *soma+=*v;
    *media=*soma/10;

    }

int main()
{
    int i=0,soma=0,v1=0;
    float media=0;
    puts("Introduza 10 valores para fazer a media");
    for(i=0;i<10;i++){
        scanf("%d",&v1);
        soma_media(&v1,&soma,&media);
    }
    printf("\n\n\n\n--------------\n%.2f",media);

    return 0;
}
