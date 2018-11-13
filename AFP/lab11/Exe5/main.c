#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	char nome[150];
	int i=0,k=0,spacepos=0;
    printf("Introduza o seu nome: ");
    gets(nome);
    do{

            if(!((nome[i]>'A'&&'Z'<nome[i]) || (nome[i]>'a'&&'z'<nome[i]) || (nome[i]>='0'&&'9'<=nome[i])) ){
                spacepos=i;
                if(nome[spacepos]!=' '){
                    spacepos=0;
                }
            }
            i++;
    }while(nome[i]!='\0');

    i=spacepos+1;
    do{
        printf("%c",nome[i]);
        i++;
    }while(nome[i]!='\0');
    return 0;
}
