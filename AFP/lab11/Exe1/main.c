#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
    char s1[50]="Estou a aprender strings",s2[50]="Odeio programar em C";

    printf("s1:%s\n",s1);
    printf("s2:%s\n\n",s2);

    scanf("%s",&s1);
    gets(s2);

    printf("\ns1:%s\n",s1);
    printf("s2:%s\n\n",s2);

    printf("O scanf l� apenas at� ao primeiro espa�o encontrado enquanto o gets l� at� que o ENTER seja primido\n\n")
    return 0;
}
