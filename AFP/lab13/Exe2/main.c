#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void a(){
    //a

    int y,*p,x;
    y=0;
    p=&y;
    x=*p;
    x=4;
    (*p)--; //aqui tira 1 valor ao endereço de y sendo esse valor 0 , o resultado será -1.
    x--;
    printf("y=%d\n",y);
}

void b(){
//b

    int *pont,cont,val;
    cont=100;
    pont = &cont; //iguala o apontador a 100
    val=*pont;  //iguala val ao endereço do apontado sendo esse cont, ou seja 100;
    printf("%d\n",val);

}

void c(){
//c


    int *px, *py,x,y;
    x=5;
    px=&x; //apontador px=5
    py=&px; //iguala py ao endereço de px qual o valor é 5
    y=*py;
    printf("x:%d y:%d\n",x,y);
    return 0;

    }

void d(){
//d

    int *px,**py,x,y;

    x=5;
    px=&x; //apontador px=5
    py=&px; //iguala py ao endereço de px qual o valor é 5
    y=**py;
    printf("x:%d y:%d\n",x,y);
}

void e(){
    char a,b,*p;
    b='c';
    p=&a;
    *p=b;
    printf("a:%c\n",a);

}
int main()
{
    setlocale(LC_ALL,"");
    a();
    b();
    c();
    d();
    e();
    return 0;
}
