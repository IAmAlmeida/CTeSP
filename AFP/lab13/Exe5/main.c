#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int maior_indicemaior (float x[], float *maior){


}

int main()
{
    float arr[10],maior;
    int i;
    setlocale(LC_ALL,"");
    srand(time(NULL));
    for(i=0;i<10;i++)
        arr[i]=(rand()%1000+1)/100;
    for(i=0;i<10;i++){

    printf("%.2f    ",arr[i]);
            maior=maior_indicemaior(arr,&maior);
    }
    return 0;
}
