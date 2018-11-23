#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
        char frase[200];
        int i=0;
        printf("Introduza algo:\t");
        gets(frase);
        for(i=0;frase[i]!='\0';i++){
            frase[i] = toupper(frase[i]);
        }
        printf("%s",frase);

    return 0;
}
