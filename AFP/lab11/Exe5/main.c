#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	char nome[150];
	int i=0,k=0,pos=0,m=0,j=0;
    printf("Introduza o seu nome: ");
    gets(nome);
    m=strlen(nome)-1;
    while(nome[i]!='\0')
    {
        if (nome[i]==' '){
            k=i+1;
            if(pos==0){
                pos=i;
            }
        }
        i++;
    }

    for(j=0;j<=pos;j++){

        if(j==-1){
            break;
        }
    printf("%c",nome[j]);
    }
    for(j=k;j<=m;j++){
        if(nome[j]=='\0'){
            break;
        }
        printf("%c",nome[j]);
    }



    return 0;
}
