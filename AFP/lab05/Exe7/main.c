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
        printf("Caract�r Introduzido \"%c\": Casado\n",cho);
    break;
    case 'v':
        printf("Caract�r Introduzido \"%c\": Viuvo\n",cho);
    break;
    case 's':
        printf("Caract�r Introduzido \"%c\": Solteiro\n",cho);
    break;
    case 'd':
        printf("Caract�r Introduzido \"%c\": Divorciado\n",cho);
    break;
    default:
        printf("Caract�r Introduzido \"%c\": Caract�r Invalido!\n",cho);
    break;
    }
    return 0;
}
