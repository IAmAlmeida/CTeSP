#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
    printf("Hello world!\n");
    int v1=0,v2=0,buffer=0,contador=0,barrel[5];
    scanf("%d %d",&v1,&v2);
    if(v2>v1){
        buffer=v2;
        v2=v1;
        v1=buffer;
    }
    int interval = v1-v2;

    do{
        barrel[contador]=rand()%(interval+1)+v2;
        contador++;
    }while(contador<5);
    contador=0;
    do{
        if(barrel[contador]%2==0){
            printf("É par: %d [%d]\n",barrel[contador],contador);
        }
        contador++;
    }while(contador<5);
    return 0;
}
