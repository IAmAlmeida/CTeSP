#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float divisao(float n1, float n2){
    float resultado;
    if(n2==0){
        resultado=-1;
    }else{
        resultado=n2/n1;
    }
    return resultado;

}

int main()
{
	setlocale(LC_ALL, "Portuguese");
    float x,y,r;
    printf("Qual o nominador:\t");
    scanf("%f",&x);
    printf("Qual o dominador:\t");
    scanf("%f",&y);
    r=divisao(x,y);
    printf("%.2f",r);
    return 0;
}
