#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    char cho,cho2;
    printf("Introduza um caracter:");
    scanf("%c",&cho);
    cho2=tolower(cho);
    switch(cho2){
    case 'c':
        printf("Caractér Introduzido \"%c\": Casado\n",cho);
    break;
    case 'v':
        printf("Caractér Introduzido \"%c\": Viuvo\n",cho);
    break;
    case 's':
        printf("Caractér Introduzido \"%c\": Solteiro\n",cho);
    break;
    case 'd':
        printf("Caractér Introduzido \"%c\": Divorciado\n",cho);
    break;
    default:
        printf("Caractér Introduzido \"%c\": Caractér Invalido!\n",cho);
    break;
    }
    return 0;
}
