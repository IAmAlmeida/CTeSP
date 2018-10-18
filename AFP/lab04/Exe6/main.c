#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
int main()

{   int char_bit = CHAR_BIT;
    int char_size_max= CHAR_MAX;
    int char_size_min= CHAR_MIN;

    int short_bit=sizeof(short);
    int short_size_max = SHRT_MAX;
    int short_size_min = SHRT_MIN;

    int int_bit=sizeof(int);
    int int_size_max = INT_MAX;
    int int_size_min = INT_MIN;


    int float_bit=sizeof(float);
    int float_size_max = FLT_MAX;
    int float_size_min = FLT_MIN;

    int double_bit = sizeof(double);
    int double_size_max = DBL_MAX;
    int double_size_min = DBL_MIN;


    printf("\t\t\\TIPO:\"char\"\\\n");
    printf("\t\t%-25s:%d\n","Tamanho em Bytes",char_bit);
    printf("\t\t%-25s:%d\n","Valor Minimo",char_size_min);
    printf("\t\t%-25s:%d\n\n","Valor Maximo",char_size_max);
    printf("\t\t\\TIPO:\"short\"\\\n");
    printf("\t\t%-25s:%d\n","Tamanho em Bytes",short_bit);
    printf("\t\t%-25s:%d\n","Valor Minimo",short_size_min);
    printf("\t\t%-25s:%d\n\n","Valor Maximo",short_size_max);
    printf("\t\t\\TIPO:\"int\"\\\n");
    printf("\t\t%-25s:%d\n","Tamanho em Bytes",int_bit);
    printf("\t\t%-25s:%d\n","Valor Minimo",int_size_min);
    printf("\t\t%-25s:%d\n\n","Valor Maximo",int_size_max);
    printf("\t\t\\TIPO:\"float\"\\\n");
    printf("\t\t%-25s:%d\n","Tamanho em Bytes",float_bit);
    printf("\t\t%-25s:%d\n","Valor Minimo",float_size_min);
    printf("\t\t%-25s:%d\n\n","Valor Maximo",float_size_max);
    printf("\t\t\\TIPO:\"Double\"\\\n");
    printf("\t\t%-25s:%d\n","Tamanho em Bytes",double_bit);
    printf("\t\t%-25s:%d\n","Valor Minimo",double_size_min);
    printf("\t\t%-25s:%d\n\n","Valor Maximo",double_size_max);

    return 0;
}
