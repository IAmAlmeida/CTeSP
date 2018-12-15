

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
typedef struct{
    int dia;
    char mes[20];
    int ano;
}tipoData;
void defaultdate(tipoData *date){
        time_t timer;
        struct tm* tm_info;
        char day[3];
        char month[3];
        char year[5];
        time(&timer);
        tm_info = localtime(&timer);
        strftime(day, 3, "%d", tm_info);
        strftime(month, 3, "%m", tm_info);
        strftime(year, 5, "%Y", tm_info);
        date->dia=atoi(day);
        date->ano=atoi(year);
        strcpy(date->mes,month);

}
void mesnumeroparaextenso(char *mes){
    switch(atoi(mes)){
        case 1:
            strcpy(mes,"Janeiro");
        break;
        case 2:
            strcpy(mes,"Fevereiro");
        break;
        case 3:
            strcpy(mes,"Março");
        break;
        case 4:
            strcpy(mes,"Abril");
        break;
        case 5:
            strcpy(mes,"Maio");
        break;
        case 6:
            strcpy(mes,"Junho");
        break;
        case 7:
            strcpy(mes,"Julho");
        break;
        case 8:
            strcpy(mes,"Agosto");
        break;
        case 9:
            strcpy(mes,"Setembro");
        break;
        case 10:
            strcpy(mes,"Outubro");
        break;
        case 11:
            strcpy(mes,"Novembro");
        break;
        case 12:
            strcpy(mes,"Dezembro");
        break;
        default:
            strcpy(mes,"fasd");
            break;

    }
}
void lerData(tipoData *data){
    printf("Introduza o dia:\n");
    scanf("%d",&data->dia);
    printf("Introduza o mes:\n");
    fflush(stdin);
    gets(data->mes);
    mesnumeroparaextenso(&data->mes);
    printf("Introduza o ano:\n");
    scanf("%d",&data->ano);
}

void escreverData(tipoData *data){
    mesnumeroparaextenso(&data->mes);
    printf("%d/%s/%d\n\n",data->dia,data->mes,data->ano);
}
