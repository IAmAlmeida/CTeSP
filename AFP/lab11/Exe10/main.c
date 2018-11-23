#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
    char selector , changer, frase[200];
    int counter=0,i=0,sizestr;
    printf("Introduza uma frase\n");
    gets(frase);
    printf("Introduza um caracter para contar o numero de ocorrencias\n");
    scanf(" %c",&selector);
     printf("Introduza um caracter para substituir o numero de ocorrencias\n");
    scanf(" %c",&changer);
    sizestr=strlen(frase)-1;
    do{
        if(frase[i]==selector)
            frase[i]=changer
            ;
        i++;
    }while(frase[i]!='\0');
    printf("%s",frase);
    return 0;
}
