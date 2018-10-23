#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
        char v1,v2;
        printf("Introduza 1 caracter:");
        scanf("%c",&v1);
        v2 = tolower(v1);
        if(v1 == '1' ||v1 == '2' ||v1 == '3' ||v1 == '4' ||v1 == '5' ||v1 == '6' ||v1 == '7' ||v1 == '8' ||v1 == '9'||v1 == '0'){
            printf("\"%c\": e um numero",v1);
        }else if(v2 == 'a' ||v2 == 'i' ||v2 == 'e' ||v2 == 'o' ||v2 == 'u'){
            printf("\"%c\": e uma vogal",v1);
        }else{
            printf("\"%c\": nao e numero nem vogal",v1);
        }
    return 0;
}
