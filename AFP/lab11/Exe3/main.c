#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
    char s1[60];
    int i=0,vog=0,cons=0,mais=0,mins=0,num=0,a=0;
    printf("Introduza algo:\t");
    gets(s1);
    do{
        char a = tolower(s1[i]);
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
            vog++;
        }else if((a>='a' && a<='z ')){
            cons++;
        }
        if(s1[i]>='0' && s1[i]<='9'){
            num++;
        }
        if(s1[i]>='A' && s1[i]<='Z'){
            mais++;
        }
        if(s1[i]>='a' && s1[i]<='z'){
            mins++;
        }
       i++;
    }while(s1[i]!='\0');
    a=vog+cons+num;
    a=i-a;
    printf("Frase inicial: %s\nVogais:%d\nConsoantes:%d\nminusculos:%d\nMaiusculas:%d\nNumeros:%d\nCaractéres Especiais:%d",s1,vog,cons,mins,mais,num,a);
    return 0;
}
