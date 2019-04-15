#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
    int a, b=10;

    a=-(--b);
    printf("a=%d, b=%d", a, b);
}
