#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,dobro;

    n1 = dobro = 0;

    printf("Numero:");
    scanf("%d",&n1);
    dobro = 2*n1;
    printf ("O dobro de %d = %d",n1,dobro);

    return 0;
}
