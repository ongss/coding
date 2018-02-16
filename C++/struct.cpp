#include<stdio.h>
int as()
{
    int a;
    int *d=&a;
    printf("%d",d);
}
int main()
{
    int a;
    int *p=&a;
    printf("%d\n",p);
    as();
    scanf(" ");
}
