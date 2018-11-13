#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
	char val[100],val2[100];
	int i=0,k=0;
    printf("Introduza algo: \t");
    gets(val);
    printf("Introduza um outro algo: \t");
    gets(val2);
    do{i++;}while(val[i]!='\0');
    do{k++;}while(val2[k]!='\0');
    if(i>k){
        printf("\nA primeira string introduzida é maior que a sucedente com um total de %d caracteres a mais\n\n String 1: %d\n String 2: %d",i-k,i,k);
    }else if(i==k){
        printf("\nAmbas têm o mesmo numero de caracteres\n\n String 1: %d\n String 2: %d",k-i,i,k);
    }else{
        printf("\nA segunda string introduzida é maior que a antecedente com um total de %d caracteres a mais\n\n String 1: %d\n String 2: %d",k-i,i,k);
    }

    return 0;

}
