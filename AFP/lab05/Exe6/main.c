#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salariob,salfinal,desc,valdesc;
    printf("Introduza o seu salario bruto:");
    scanf("%f",&salariob);
    if(salariob<800){
        desc=0.98;
        valdesc=(1-desc)*salariob;
        salfinal=salariob*desc;
    }else if(salariob<1000){
        desc=0.96;
        valdesc=(1-desc)*salariob;
        salfinal=salariob*desc;
    }else if(salariob<1500){
        desc=0.94;
        valdesc=(1-desc)*salariob;
        salfinal=salariob*desc;
    }else if(salariob<3000){
        desc=0.90;
        valdesc=(1-desc)*salariob;
        salfinal=salariob*desc;
    }else if(salariob<5000){
        desc=0.88;
        valdesc=(1-desc)*salariob;
        salfinal=salariob*desc;
    }else{
        desc=0.82;
        valdesc=(1-desc)*salariob;
        salfinal=salariob*desc;
    }

    printf("\n\n%-30s%.4f\n%-30s%.0f%%\n%-30s%.4f\n%-30s%.4f\n","Vencimento bruto:",salariob,"Desconto:",((1-desc)*100),"Valor Desconto:",valdesc,"Vencimento com descontos:",salfinal);
    return 0;
}
