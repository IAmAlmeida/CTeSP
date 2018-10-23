#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int ano;
    int mes ;
    printf("Introduza um Ano:");
    scanf("%d",&ano);
    printf("Introduza um mes:");
    scanf("%d",&mes);

//    if(mes>1 || mes<12){
//        if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
//            printf("O mes tem 31 dias");
//        }else{
//            printf("O mes tem 30 dias");
//        }
//        if(mes == 2){
//            if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
//                printf("O mes tem 29 dias");
//            }else{
//                printf("O mes tem 28 dias");
//            }
//        }
//    }

    switch(mes){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("O mes tem 31 dias");
        break;
    case 2:
        if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
                printf("O mes tem 29 dias");
            }else{
               printf("O mes tem 28 dias");
            }

    break;
    case 4 :  case 6 :  case 11 :  case 9 :  printf("O mes tem 30 dias"); break;
    default: printf("Mes Invalido"); break;
}
    return 0;
}
