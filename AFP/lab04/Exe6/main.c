#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
int main()
{
    int char_size_max= CHAR_MAX;

    int short_size_max = SHRT_MAX;
    int int_size_max = INT_MAX;
    int float_size_max = FLT_MAX;
    int double_size_max = DBL_MAX;



    printf("\t\t\\TIPO:\"char\"\\\n");
    printf("\t\t%-25s:%d\n","Tamanho em Bytes",char_size_max);
    printf("\t\t%-25s:%d\n","Valor Minimo",char_size_max);
    printf("\t\t%-25s:%d\n","Valor Maximo",char_size_max);

    printf("O tamanho em bytes de um short: %d\n",short_size_max);
    printf("O tamanho em bytes de um int: %d\n",int_size_max);
    printf("O tamanho em bytes de um float: %d\n",float_size_max);
    printf("O tamanho em bytes de um double: %d\n",double_size_max);

    return 0;
}
