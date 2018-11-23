#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	char string[200];
	int i=0;
    printf("Introduza algo\n");
    gets(string);
    int d = strlen(string);
    for(i=d;i>=0;i--){
            if(string[i]!='\0')
        printf("%c",string[i]);
    }
    return 0;
}
