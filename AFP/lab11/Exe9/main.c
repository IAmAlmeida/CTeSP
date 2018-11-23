#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
    char selector , frase[200];
    int counter=0,i=0,sizestr;
    printf("Introduza uma frase\n");
    gets(frase);
    printf("Introduza um caracter paracontar o numero de ocorrencias\n");
    scanf("%c",&selector);
    sizestr=strlen(frase)-1;
    do{
        if(tolower(frase[i])==selector)
            frase[i]='*';
        i++;
    }while(frase[i]!='\0');
    printf("%s",frase);
    return 0;
}
