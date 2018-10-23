#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salario = 0;
    printf("Salario:");
    scanf("%d",&salario);
    if(salario>2000){
        salario=salario*1.05;
    }else{
        salario=salario*1.08;
    }
    printf("\nSalario com o aumento: %d\n",salario);
    return 0;
}
