#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
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
        if(frase[i]==selector)
            counter++;
        i++;
    }while(frase[i]!='\0');
    printf("O caracter %c aparece %d vezes na frase : \n*****\n\n %s \n\n*****",selector,counter,frase);
    return 0;
}
