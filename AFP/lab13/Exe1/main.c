#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ( )
{
setlocale(LC_ALL,"");
//a
int v[5] = { 10, 20, 30, 40, 50 };
int *p, i;
p = v;
for (i = 0; i < 5; i++)
    printf("%d ", *(p+i));
    //b
    printf("\n\nPrimeiro Endereço:\n\n &p: %d\n &v: %d\n &p[0]:%d\n &v[0]:%d\n",p,v,&p[0],&v[0]);
    //c
    printf("\n\nSegundo Endereço:\n\n &p: %d\n &v: %d\n &p[0]:%d\n &v[0]:%d\n",p+1,v+1,&p[1],&v[1]);
    //d
    printf("\n\nPrimero Valor:\n\n *p: %d\n *v: %d\n p[0]:%d\n v[0]:%d\n",*p,*v,p[0],v[0]);
    //e
    printf("\n\nSegundo Valor:\n\n *(p+1): %d\n *(v+1): %d\n p[1]:%d\n v[1]:%d\n",*(p+1),*(v+1),p[1],v[1]);

    //f o facto de ser os apontadores de "p" e de "v" mais um e nao o apontador da soma do endereço de "p" e de "v" mais um altera por completo o resultado dando 11 em vez de 20
    printf("%d %d %d %d\n", v[1], p[1], *v+1, *p+1);
}
