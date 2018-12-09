#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define maxsize 10
void maior_indicemaior (float x[10], float *maior, int *indice){
    int i;
    float buffer=0;
    for(i=0;i<10;i++){
        if(x[i]>*maior){
            *maior=x[i];
            *indice = i;
        }
    }
}

int main()
{
    float arr[10],maior=0;
    int i,indice=0;
    setlocale(LC_ALL,"");
    srand(time(NULL));
    for(i=0;i<10;i++){
        arr[i]=rand()%100;
        arr[i]=arr[i]/10;
        }
    for(i=0;i<10;i++){
            printf("           \n");
            printf("|   %d   |\n",i);
            printf("           \n");
            printf("%.2f\n\n\n\n",arr[i]);
    }
    maior_indicemaior(arr,&maior,&indice);
    printf("\n\n\n%.2f\npos:%d\n\n",maior,indice);
    return 0;
}
