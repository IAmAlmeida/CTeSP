#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
int main()
{
    int char_size_max= CHAR_BIT;
    int short_size_max = SHRT_MAX;
    int int_size_max = INT_MAX;
    int float_size_max = FLT_MAX;
    int double_size_max = DBL_MAX;



    printf("O tamanho em bytes de um char: %d\n",char_size_max);
    printf("O tamanho em bytes de um short: %d\n",short_size_max);
    printf("O tamanho em bytes de um int: %d\n",int_size_max);
    printf("O tamanho em bytes de um float: %d\n",float_size_max);
    printf("O tamanho em bytes de um double: %d\n",double_size_max);

    return 0;
}
