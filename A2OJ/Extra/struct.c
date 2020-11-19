#include<stdio.h>
int main(){
    struct node{
        int i;
        int *c;
    };
    struct node a[2],*p;
    int b[2]={30,40};
    p=&a[0];
    a[0].i=10;
    a[0].c=b;
    a[1].i=20;
    printf("++p->i = %d",++p->i);
    printf("(++p)->i = %d",(++p)->i);
    printf("(p++)->i = %d",(p++)->i);
    printf("*p->c = %d",*p->c);
    printf("*p->c++ = %d",*p->c++);
    printf("(*p->c)++ = %d",(*p->c)++);
    printf("*p++->c = %d",*p++->c);

    return 0;
}