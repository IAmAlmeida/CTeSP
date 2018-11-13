#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;

    printf("Introduza um numero inteiro");
    scanf("%d", &j);


    printf("FOR: ");

    for(i = 1; i <= j; i++)
{
    printf("%d ", i);
}
    printf("\n");

    i=1;

    printf("DO WHILE: ");

    do
    {
    printf("%d ", i);
    i++;
    }while(i<=j);

    i=1;

    printf("\n");
    printf("WHILE: ");

        while(i<=j)
        {
        printf("%d ",i);
        i++;
    }
    printf("\n");

    printf("FOR: ");

    for(i = j; j>0 ; i--)
{
    printf("%d ", i);
}
    printf("\n");

    i=1;

    printf("DO WHILE: ");

    do
    {
    printf("%d ", i);
    i++;
    }while(i<=j);

    i=1;

    printf("\n");
    printf("WHILE: ");

        while(i<=j)
        {
        printf("%d ",i);
        i++;
    }
}
