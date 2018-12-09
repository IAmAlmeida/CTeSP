#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *encontraletra(char *str){
 int i=0;
 for(i=0;str[i]!='\0';i++){
    if((tolower(str[i])>='a'||tolower(str[i])<='z')&& str[i]!='0'&& str[i]!='1'&& str[i]!='2'&& str[i]!='3'&& str[i]!='4'&& str[i]!='5'&& str[i]!='6'&& str[i]!='7'&& str[i]!='8'&& str[i]!='9'){
        printf("%c - pos: %d",str[i],i);

        break;
    }
 }
}

int main()
{
    char frase[100];
    puts("Introduza uma frase:");
    gets(frase);
    *encontraletra(&frase);
    return 0;
}
