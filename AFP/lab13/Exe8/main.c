#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    system("color F0");
    setlocale(LC_ALL,"");
    int w[5],*v,m=5,k;
    v=w;
    for(k=1;k<m;k++){
        w[k]=5*k+10;
    }
    *w=40;
    *(w-1)=50;

    for(k=0;k<m;k++){
        printf("w[%d]   %d\n",k,w[k]);
    }
    printf("*w-2   %d       = w[0]-2\n",*w-2);
    printf("w      %d  = valor de ram de W\n",w);
    printf("w-2    %d  = valor de ram -2 bytes de w\n",w-2);
    printf("*(w-2) %d       = valor de w[4]\n",*(w-2));
    printf("&w[2]  %d  = ---\n",&w[2]);
    printf("*v     %d       = v=w ou seja v é igual ao array de W , ou seja 40\n",*v);
    printf("*v-2   %d       = valor de *v menos 2\n",*v-2);
    printf("*(v-2) %d       = *(v-2)=w[4]\n",*(v-2));
    return 0;
}
