#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int var1=0,var2=0,buffer=0,contador=0;
	setlocale(LC_ALL, "Portuguese");
    printf("2 nums\n");
    scanf("%d %d",&var1,&var2);
    if(var2>var1){
        buffer=var2;
        var2=var1;
        var1=buffer;
    }
    contador=var2;
    do {
        if(contador!=var2){
            if(contador%var2==0){
                printf("Erro\n");
            }else{
                printf("%d\n",contador);
            }
        }
        contador++;
    }while(contador<=var1);

    return 0;
}
