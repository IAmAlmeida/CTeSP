#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MAX_CHAR 500
int main()
{
	setlocale(LC_ALL, "Portuguese");
    printf("Hello world!\n");
    char t1[MAX_CHAR],t2[MAX_CHAR],t3[MAX_CHAR*2];
    FILE *f, *f2, *f3;
    f = fopen("1.txt","w");
    f2 = fopen("2.txt","w");
    f3 = fopen("3.txt","w");

    printf("A>");
    gets(t1);
    printf("B>");
    gets(t2);

    fprintf(f, "%s", t1);
    fprintf(f2, " %s", t2);
    fclose(f);
    fclose(f2);
    f = fopen("1.txt","r");
    f2 = fopen("2.txt","r");

    fgets (t1, MAX_CHAR, f);
    fgets (t2, MAX_CHAR, f2);

    strcpy(t3,strcat(t1,t2));

    fputs(t3,f3);

    fclose(f);
    fclose(f2);
    fclose(f3);

    system("3.txt");
    return 0;
}
