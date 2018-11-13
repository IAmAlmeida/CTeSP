#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;


    printf("FOR: ");

    for(i = 1; i <= 20; i++)
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
    }while(i<=20);

    i=1;

    printf("\n");
    printf("WHILE: ");

        while(i<=20)
        {
        printf("%d ",i);
        i++;
    }

    return 0;

}
