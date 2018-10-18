#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t\t %-10s %-5s %-20s %-5s %-10s\n"  ,"\\n","=","<ENTER>","-","CR");
    printf("\t\t %-10s %-5s %-20s %-5s %-10s\n"  ,"\\\\","=","<BACKSLASH>","-","\\");
    printf("\t\t %-10s %-5s %-20s %-5s %-10s\n"  ,"\\t","=","<TAB>","-","VT");
    printf("\t\t %-10s %-5s %-20s %-5s %-10s\n"  ,"%%","=","<PERCENTAGE SIGN>","-","%");
    printf("\t\t %-10s %-5s %-20s %-5s %-10s\n"  ,"\\\"\\\"","=","<QUATATION MARKS>","-","\"\"");


    return 0;
}

/*  \n=<ENTER>-CR
    \\=<BACKSLASH>-\
    \t=<TAB>-VT
    %%=<PERCENTAGE SIGN>-%
    \"\"=<QUOTATION MARKS>-""
*/
