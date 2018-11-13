#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
    char abba[20];
    int i=0,k=0,m=0;
    printf("Introduza um palíndromo: ");
    gets(abba);
    m=k=strlen(abba); //abba = 4
    k--; //abba = 3
    // abba ; b=4;y=3;a=0;
    do{
     if(abba[i]==abba[k]){
        k--;
        m--;
        i++;
     }else{
        printf("não é\n");
        return 0;
     }
    }while(m>0);
    printf("é\n");
    return 0;
}
